//check if the elements in the array are sorted or not using recursion
#include<bits/stdc++.h>
using namespace std;
bool issorted(int arr[],int size){
    //base case
    if(size==0 || size==1){
        return true;
    }
    //solve 1 case
    if(arr[0]>arr[1]){
        return false;
    }
    return issorted(arr+1,size-1);
}
int main()
{

    int arr[]={9,9,9};
    int size=sizeof(arr)/sizeof(int);
    if(issorted(arr,size)){
        cout<<"The array is sorted";
    }
    else{
        cout<<"The array is not soted";
    }
}