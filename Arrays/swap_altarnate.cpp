//swap the altarnate number  in a given array

#include<iostream>
using namespace std;
void swapi(int *x,int *y){

    int tem=*x;
    *x=*y;
    *y=tem;
}
void swap_altarnate(int arr[],int n){

    int i=0;
    while(i<n-1){
        swapi(&arr[i],&arr[i+1]);
        i=i+2;
    }
}
int main()
{
        int arr[]={2,3,4,5,6,7};
        int n=sizeof(arr)/sizeof(int);
        swap_altarnate(arr,n);
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
}