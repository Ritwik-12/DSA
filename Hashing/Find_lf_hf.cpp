//find the heighest and lowest frequecy element in an array
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    unordered_map<int,int>up;

    //pre-computation

    for(int i=0;i<n;i++){
        up[arr[i]]++;
    }
        int maxfreq=0,minfreq=INT_MAX;
        int maxele=0,minele=0;
    for(auto it:up){
       
       int count=it.second;
       int element=it.first;
       if(count>maxfreq){
            maxele=element;
            maxfreq=count;
       }    
       if(count<minfreq){
            minele=element;
            minfreq=count;
       }

    }
    cout<<maxele<<endl;
    cout<<minele<<endl;
}