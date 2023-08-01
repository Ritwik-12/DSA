// reverse an array using two pointer approach

#include<iostream>
using namespace std;
void reverse(int arr[],int n){

    int i=0;
    int j=n-1;

    while(i<=j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }

}

void printarray(int arr[],int n){

    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
int main()
{

        int arr[]={1,2,3,4,5};

        int n=sizeof(arr)/sizeof(int);
        printarray(arr,n);
        cout<<endl;
        reverse(arr,n);
        cout<<"after reverse the array is ";
        cout<<endl;
        printarray(arr,n);
}