/*sort first half of the array in ascending order and
    second half of the array in decending order
*/

#include<bits/stdc++.h>
using namespace std;
void bubble_sort_ascending(int arr[],int low,int high){
        for(int i=low;i<high-1;i++){
            for(int j=low;j<high-i-1;j++){
                if(arr[j]>arr[j+1]){
                    swap(arr[j+1],arr[j]);
                }
            }

        }
}

void bubble_sort_decending(int arr[],int low,int high){
    for(int i=low;i<high-1;i++){
        for(int j=low;j<high-i-1;j++){
            if(arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

void printarray(int arr[],int high){

    for(int i=0;i<high;i++){
        cout<<arr[i]<<" ";
    }
}


void sort_as_ds(int arr[],int low,int high){

    int mid=(low+high)/2;
    bubble_sort_ascending(arr,low,mid-1);
    bubble_sort_decending(arr,mid,high);
}
int main(){

    int arr[]={4,1,2,1,9,8};
    int high=sizeof(arr)/sizeof(int);

    sort_as_ds(arr,0,high);

    printarray(arr,high);

}

