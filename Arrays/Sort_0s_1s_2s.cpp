// given an input array of 0's ,1's and 2's we need to sort it 
// intution to solve this problem we will use the doutch national
// flag algorithm also known as the three way partitioning algorithm
// it sort the array in a single pass
// time complexity is O(n).

#include<iostream>
using namespace std;
void sort_0_1_2(int arr[],int n){

    int low=0;
    int mid=0;
    int high=n-1;
    while(mid<=high){

        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;

        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }

}
void print_array(int arr[],int n){

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{

        int arr[]={1,0,2,1,0,0,2,1};
        int size=sizeof(arr)/sizeof(int);
        cout<<"array befor sort";
        print_array(arr,size);
        cout<<endl<<"array after sort";
        sort_0_1_2(arr,size);
        print_array(arr,size);
}