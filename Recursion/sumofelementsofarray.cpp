//find the sum of all the elements in the array using recursion

#include<bits/stdc++.h>
using namespace std;
int sumofarray(int arr[],int size,int index){
    //base case
    if(index==size){
        return 0;
    }
    
  return arr[index]+sumofarray(arr,size,index+1);
  

}
int main()
{
    int arr[]={1,2,3,4,5,6,7};
    int size=sizeof(arr)/sizeof(int);
    int sumi=sumofarray(arr,size,0);
    cout<<sumi;

}   