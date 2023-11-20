//bubble sort using recursion
#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int *arr,int n){
    //base case
    if(n==0 ||n==1){
        return;
    }
    //solve 1 case
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }

    bubble_sort(arr,n-1);
}
int main()
{
    int arr[]={12,2,1,5,6,2,13};
    int n=sizeof(arr)/sizeof(int);
    //print the sorted array
    bubble_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }

}