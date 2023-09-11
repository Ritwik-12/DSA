//find all duplicate element in an array
#include<bits/stdc++.h>
using namespace std;
vector<int> find_all_duplicate(int arr[],int n){
    vector<int>v;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                v.push_back(arr[i]);
            }
        }
    }
    return v;
}
int main()
{
        int arr[]={1,2,2,3,4,5,4};
        int n=sizeof(arr)/sizeof(int);
        vector<int>vi;
        vi=find_all_duplicate(arr,n);
        for(int it:vi){
            cout<<it<<" ";
        }

}