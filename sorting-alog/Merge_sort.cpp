#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int low,int mid,int high){

    int n1=mid-low+1;
    int n2=high-mid;
    int a[n1];
    int b[n2];
    for(int i=0;i<n1;i++){
        a[i]=arr[low+i];
    }
    for(int j=0;j<n2;j++){
        b[j]=arr[mid+1+j];
    }

    int i=0;
    int j=0;
    int k=low;

    while(i<n1 && j<n2){
        if(a[i]<b[j]){
            arr[k++]=a[i++];
        }
        else{
            arr[k++]=b[j++];
        }
    }

    while(i<n1){
        arr[k++]=a[i++];
    }
    while(j<n2){
        arr[k++]=b[j++];
    }
}
void merge_sort(int arr[],int low,int high){

    if(low>=high){
        return ;
    }

    int mid=(low+high)/2;
    merge_sort(arr,low,mid);
    merge_sort(arr,mid+1,high);
    merge(arr,low,mid,high);

}
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{

    int arr[]={12,1,4,5,8,9,10};
    int n=sizeof(arr)/sizeof(int);

    cout<<"array before sorting ";
    printarray(arr,n);
    cout<<endl;

    merge_sort(arr,0,n-1);
    cout<<"array after sorting ";
    printarray(arr,n);


    
}