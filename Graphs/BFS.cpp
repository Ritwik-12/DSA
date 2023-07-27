#include<bits/stdc++.h>
using namespace std;
void bfs(vector<int>adj[],int n,int start){

    int visit[n]={0};
    queue<int> q;
    q.push(start);
    visit[start]=1;
    while(!q.empty()){
        int node=q.front();
        q.pop();
        cout<<node<<" ";
        //put the neighbours of the node 
        for(auto it:adj[node]){
            if(visit[it]!=1){
                visit[it]=1;
                q.push(it);
            }
        }
    }

}
int main()
{

    //creation a graph using adjacency list
    int n,m,u,v;
    cout<<"Ente the no of nodes and edges";
    cin>>n>>m;
    vector<int> adj[n+1];

    for(int i=1;i<=n;i++){
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bfs(adj,n,1);
}