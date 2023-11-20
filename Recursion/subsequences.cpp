//find all the subsequences of a given string
#include<bits/stdc++.h>
using namespace std;
void solve(string str,vector<string>&ans,int index,string output){
    //base case
    if(index>=str.length()){
        ans.push_back(output);
        return;
    }

    //exclude
    solve(str,ans,index+1,output);
    //include
    char c=str[index];
    output.push_back(c);
    solve(str,ans,index+1,output);
}
vector<string> subsequences(string str){
    vector<string>ans;
    string output="";
    int index=0;
    solve(str,ans,index,output);
    return ans;

}
int main()
{
    string str="abc";
    vector<string>result=subsequences(str);
    for(auto it:result){
        cout<<it<<" ";
    }

}