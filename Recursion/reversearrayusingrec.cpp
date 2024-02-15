// //reverse an array using recursion
// #include<bits/stdc++.h>
// using namespace std;
// void reverse(int arr[],int low,int high){
//     if(low>high) return;

//     swap(arr[low],arr[high]);
//     reverse(arr,low+1,high-1);
// }
// int main()
// {
//     int arr[]={1,2,3,4,5};
//     int n=sizeof(arr)/sizeof(int);
//     reverse(arr,0,n-1);
//     cout<<"The array after the reverse is "<<endl;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

//do the same problem using only one pointer
#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[],int i,int n){
    if(i>=n/2) return;

    swap(arr[i],arr[n-i-1]);
    reverse(arr,i+1,n);
}
int main()
{
    int arr[]={1,2,3,4,5};
    int  n=sizeof(arr)/sizeof(int);
    reverse(arr,0,n);
    cout<<"The array after the reverse is "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}