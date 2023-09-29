#include<bits/stdc++.h>
using namespace std;
int main()
{
        int n;
        cout<<"Enter the size of the array"<<endl;
        cin>>n;
        int arr[n];
        cout<<endl<<"Enter the elements of the array";
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        //ceating a hash array

        int hash[13]={0};

            //precomputation

             for(int i=0;i<n;i++){

                hash[arr[i]]+=1;
        }
        int q;
        cout<<"Enter the number of queries"<<endl;
        cin>>q;
        
        while(q>0){
            int number;
            cout<<"Enter the number to find its freuency";
            cin>>number;

            cout<<hash[number]<<endl;
            q--;
        }
    
   

       
        return 0;
}