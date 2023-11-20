//find all the subset of  a given set
//eg{1,2,3}

#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>&v,vector<vector<int>> &ans,vector<int>output,int index){
    //base case
    if(index>=v.size()){
        ans.push_back(output);
        return;
    }
    //exclude
    solve(v,ans,output,index+1);
    //include
    int element=v[index];
    output.push_back(element);
    solve(v,ans,output,index+1);
}
vector<vector<int>> subset(vector<int>&v){
    vector<vector<int>>ans;
    vector<int>output;
    int index=0;
    solve(v,ans,output,index);
    return ans;
}
int main()
{
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    
    vector<vector<int>>result=subset(v);
    for(const vector<int>& innervec:result){
        for(int value:innervec){
            cout<<"{"<<value<<"}"<<" ";
        }
        cout<<endl;
    }
}