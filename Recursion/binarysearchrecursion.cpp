//binary search using recursion
#include<bits/stdc++.h>
using namespace std;
int binarysearch(int arr[],int s,int e,int key){

    //base case
    //element not found
    if(s>e){
        return -1;
    }
    
    int mid=s+(e-s)/2;
    //element found
    if(arr[mid]==key){
        return mid;
    }
    if(arr[mid]<key){

        return binarysearch(arr,mid+1,e,key);
    }
    else{
        return binarysearch(arr,s,mid-1,key);
    }
}
int main()
{
        int arr[]={1,4,6,8,9,12};
        int  n=sizeof(arr)/sizeof(int);
        int index=binarysearch(arr,0,n-1,12);
        cout<<index<<" ";
        

}