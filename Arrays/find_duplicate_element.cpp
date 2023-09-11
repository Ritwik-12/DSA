//find duplicate elements in an input array
#include<iostream>
using namespace std;

void find_duplicate(int arr[],int n){

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                cout<<"The duplicate element in the array is "<<endl<<arr[i];
            }
        }
    }
}
int main(){

    int arr[]={1,2,3,4,5,4,6};
    int n=sizeof(arr)/sizeof(int);
    find_duplicate(arr,n);
}