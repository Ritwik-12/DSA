//find the pair whose sum is equals to the given input sum

#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>> pair_sum(int arr[],int n,int sum){

        vector<pair<int,int>>v;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int newsum=arr[i]+arr[j];
                if(newsum==sum){
                   v.push_back({arr[i],arr[j]});
                }
            }

        
        }
        return v;
}
int main()
{

    int arr[]={2,1,3,2,6,7};
    int n=sizeof(arr)/sizeof(int);
    int sum=4;
    vector<pair<int,int>>vi;
    vi=pair_sum(arr,n,sum);
    for(auto it:vi){
        cout<<"{"<<it.first<<","<<it.second<<"}";
    }
}