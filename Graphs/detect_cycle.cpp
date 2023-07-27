//detect cycle in an undirected graph
#include<bits/stdc++.h>
using namespace std;
bool detect_cycle_using_bfs(vector<int>adj[],int n,int src){
    int visit[n]={0};
    queue<pair<int,int>>q;
     visit[src]=1;
    q.push({src,-1});
   
    while(!q.empty()){
        int node=q.front().first;
        int parent=q.front().second;
        q.pop();
        for(auto it:adj[node]){
                if(!visit[it]){
                    visit[it]=1;
                    q.push({it,node});
                }
                else if(parent!=it){
                    return true;
                }
        }
    }
    return  false;
}
int main()
{

    int n,m;
    cout<<"Enter the number of nodes and edges of the graph";
    cin>>n>>m;
    vector<int>adj[n+1];
    cout<<"Enter the edges of the graph";
    int u,v;
    for(int i=1;i<=m;i++){
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bool is_cycle=detect_cycle_using_bfs(adj,n,1);
    cout<<boolalpha<<is_cycle;
}