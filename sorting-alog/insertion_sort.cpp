#include<bits/stdc++.h>
using namespace std;

int insertion_sort(int arr[],int n){
    
    for(int i=1;i<n;i++){
        int tem=arr[i];
        int j=i-1;
        while(j>=0){
            if(arr[j]>tem){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
            j--;
        }

        arr[j+1]=tem;
    }
}
void printarray(int arr[],int n){

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int arr[]={1,12,3,4,5,6,10};
    int n=7;
    printarray(arr,n);
    
    insertion_sort(arr,n);
    cout<<endl;
   
     printarray(arr,n);


}