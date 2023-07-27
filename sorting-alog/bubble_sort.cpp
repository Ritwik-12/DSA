//bubble sort
#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int arr[],int n){

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){

                swap(arr[j],arr[j+1]);
            }
        }
    }

}
void printarray(int arr[],int n){

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){

    int arr[]={12,1,5,3,1,10};
    int n=6;
    printarray(arr,n);
    cout<<endl;
    bubble_sort(arr,n);
    printarray(arr,n);
}