//check an input array is sorted or not
#include<bits/stdc++.h>
using namespace std;
bool is_sorted(int arr[],int n){

        int i=0;
        while(i<n){
            if(arr[i]<arr[i+1]){
                i++;
            }
            else{
                   return 0;
                break;
             
            }
        }
        return 1;

}
int main(){

        int arr[]={1,2,3,4,5};
        int n=sizeof(arr)/sizeof(int);
        bool is_sort=is_sorted(arr,n);
       
        cout<<is_sort<<endl;
        if(is_sort==1){
            cout<<"sorted";
        }
        else{
            cout<<"not sorted";
        }
}