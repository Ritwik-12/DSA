#include<bits/stdc++.h>
using namespace std;
void bubble_sort_decending(int arr[],int n){

   for(int i=0;i<n-1;i++){
    for(int j=0;j<n-i-1;j++){
        if(arr[j]<arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }
   }
}
int main(){

    int arr[]={1,4,5,2,8,0};
    int n=sizeof(arr)/sizeof(int);

    bubble_sort_decending(arr,n);

    for(int i:arr){
        cout<<i<<" ";
    }
}