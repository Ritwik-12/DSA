#include<bits/stdc++.h>
using namespace std;
int find_frequency_number(int arr[],int n,int element){

    int count=0;
    for(int i=0;i<n;i++){
        if(element==arr[i]){
            count++;
        }
    }
    return count;
}

int main()
{

   int arr[]={1,3,3,4,9,1,0,1,1,5,1};
   int n=sizeof(arr)/sizeof(int);
   int element;
   cout<<"Enter the element to find its frequency"<<endl;
   cin>>element;
   int frequency=find_frequency_number(arr,n,element);
   cout<<endl;
   cout<<"the frequency of the number is "<<frequency;

}