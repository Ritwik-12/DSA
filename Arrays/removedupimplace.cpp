//remove duplicate elements implace of the sorted array
#include<bits/stdc++.h>
using namespace std;
int removeduplicateimplace(int arr[],int n){
        int i=0;
    for(int j=1;j<n;j++){
        if(arr[j]!=arr[i]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    return i+1;
}
int main(){
    int arr[]={1,2,1,2,3,1,3,1,5,1};
    int n=sizeof(arr)/sizeof(int);
     sort(arr,arr+n);
    int s=removeduplicateimplace(arr,n);
    cout<<s;
    cout<<endl;
    for(int i=0;i<s;i++){
        cout<<arr[i]<<" ";
    }
}