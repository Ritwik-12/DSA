//selection sort
#include<bits/stdc++.h>
using namespace std;
void selection_sort(int arr[],int n){

    for(int i=0;i<n-1;i++){
        int minindex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minindex]){
                minindex=j;
            }
        }
        swap(arr[i],arr[minindex]);
    }
}
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[]={1,12,3,2,6,9};
    int n=6;
    printarray(arr,n);
    cout<<endl;
    selection_sort(arr,n);
    printarray(arr,n);
}