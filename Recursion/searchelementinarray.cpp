//find the element ih the array using recursion
#include<bits/stdc++.h>
using namespace std;
int searchelement(int arr[],int n,int key,int count=0){
    //base case
        if(n==0){
            return -1;
        }
        if(arr[0]==key){
            
            return count;
        }
        return searchelement(arr+1,n-1,key,count+1);

}
int main()
{

    int arr[]={1,4,2,5,6};
    int n=sizeof(arr)/sizeof(int);

    int index=searchelement(arr,n,6);
    cout<<index<<" ";
}