#include<bits/stdc++.h>
using namespace std;
int max_element(int arr[],int n){

    int maxelement=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>maxelement){
            maxelement=arr[i];
        }
    }
    return maxelement;
}
int min_element(int arr[],int n){
    int minelement=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<minelement){
            minelement=arr[i];
        }
    }
    return minelement;
}
int main()
{

    int arr[]={12,1,5,6,3,9};
    int n=sizeof(arr)/sizeof(int);
    int max=max_element(arr,n);
    cout<<"the maximum element in the array is :";
    cout<<max<<" ";
    int min=min_element(arr,n);
    cout<<endl;
    cout<<"the minimim element present in the array is :";
    cout<<min<<" ";

}