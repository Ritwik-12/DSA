//find the no of provinces  in a graph (diconnected graph)
#include<bits/stdc++.h>
using namespace std;

void dfs(int node,vector<int>adj[],int visit[]){

    visit[node]=1;
    for(auto it:adj[node]){
        if(!visit[it]){
            dfs(it,adj,visit);
        }
    }
}

int no_of_province(vector<int>adj[],int n){


    int visit[n]={0};
    int count=0;
    for(int i=1;i<=n;i++){
        if(!visit[i]){
            count++;    
            dfs(i,adj,visit);
        }
    }
       return count;

}
int main()
{
    int n,m;
    cout<<"Enter the no of nodes and endges";
    cin>>n>>m;
    vector<int> adj[n+1];
    int u,v;
    cout<<endl;
    cout<<"Enter the edges"<<endl;
    for(int i=1;i<=m;i++){
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int province=no_of_province(adj,n);

    cout<<"The no of province is ";
    
    cout<<province<<endl;

}