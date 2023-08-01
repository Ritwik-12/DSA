//given an input array find the element which
//apperas only one or whose frequency is onely one
//in the array
#include<iostream>
using namespace std;
int find_unique(int arr[],int n){
        //we will use x-or operation to find the 
        //unique element in the array
        //eg--2^3^4^3^2=4
        int ans=0;
        for(int i=0;i<n;i++){
            ans=ans^arr[i];
        }
        return ans;
}
int main()
{

   int arr[]={1,1,2,2,4,4,6};
   int n=sizeof(arr)/sizeof(int);
  int unique_element= find_unique(arr,n);
  cout<<unique_element;
}