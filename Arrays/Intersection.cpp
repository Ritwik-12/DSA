//Find Intersection of two given array of size m and n
//the input arrays will be in sorted order
//intersection means the common  element between the two array
#include<bits/stdc++.h>
using namespace std;
vector<int> find_intersection(int arr[],int a[],int n,int m){

    vector<int>v;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i]==a[j]){
                    v.push_back(arr[i]);
                    break;
            }
        }
    }
    return v;
}
int main()
{
        int arr[]={2,3,4,5,6};
        int a[]={2,3,6,4};
        int n=sizeof(arr)/sizeof(int);
        int m=sizeof(a)/sizeof(int);
        vector<int> vi=find_intersection(arr,a,n,m);
        for(auto it:vi){
            cout<<it<<" ";
        }


}

