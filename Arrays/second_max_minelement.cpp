#include<bits/stdc++.h>
using namespace std;
int second_maxelement(int arr[],int n){
    int maxelement=arr[0];
    for(int i=0;i<n;i++){
        int maxelement=max(maxelement,arr[i]);
    }
    int second_max=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>second_max && arr[i]!=maxelement){
            second_max=arr[i];
        }
    }
    return second_max;
}
int second_min(int arr[],int n){

    int minele=arr[0];
    for(int i=0;i<n;i++){
        minele=min(minele,arr[i]);
    }
    int second_min=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<second_min && arr[i]!=minele){
            second_min=arr[i];
        }
    }
    return second_min;
}
int main()
{
    int arr[]={12,1,5,6,7,9};
    int n=sizeof(arr)/sizeof(int);
    int second_max=second_maxelement(arr,n);
    cout<<second_max;
    int second_minimum=second_min(arr,n);
    cout<<endl;
    cout<<second_minimum;
}