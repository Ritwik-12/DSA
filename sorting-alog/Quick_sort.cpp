#include<bits/stdc++.h>
using namespace std;

int partition(int arr[],int first,int last){
    int pivot=arr[last];
    int i=first-1;
    int j=first;
    for(;j<last;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[last]);

    return i+1;


}

void quick_sort(int arr[],int first,int last){

    //base case
    if(first>=last){
        return;
    }

    int pi=partition(arr,first,last);
    quick_sort(arr,first,pi-1);
    quick_sort(arr,pi+1,last);
}
void  printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[]={12,1,36,3,2};
    int n=sizeof(arr)/sizeof(int);

    printarray(arr,n);
    cout<<endl;
    quick_sort(arr,0,n-1);
    printarray(arr,n);


}