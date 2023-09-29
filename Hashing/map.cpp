//hashing an array using map stl data structure

#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    cout<<endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    map<int,int> m;
    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }

    //iterate over the map
    for(auto it:m){
        cout<<it.first<<" "<<it.second<<endl;
    }
    int q;
    cin>>q;
    int number;
    while(q>0){
        cin>>number;
        cout<<endl;
        //fetch

        cout<<m[number]<<endl;
        q--;
    }



}