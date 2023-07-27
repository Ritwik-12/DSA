#include<bits/stdc++.h>
using namespace std;
void dfs(int node,vector<int> adj[],int visit[],vector<int> &ls){

    visit[node]=1;
   
    ls.push_back(node);
    for(auto it:adj[node]){
        if(!visit[it]){
             dfs(it,adj,visit,ls);
        }
       
    }
}

vector<int> dfstraversal(vector<int> adj[],int n){
    int visit[n]={0};
    int start=1;
     vector<int> ls;
    dfs(start,adj,visit,ls);
    return ls;
}
int main()
{
    int n,m,u,v;
    cout<<"Enter the no of nodes and edges";
    cin>>n>>m;
     vector<int> adj[n+1];
     for(int i=1;i<=n;i++){
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
     }
    vector<int> lis=dfstraversal(adj,n);

    for(auto it:lis){
        cout<<it<<" ";
    }

}