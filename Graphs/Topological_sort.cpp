//toplogical short is done in the directed acyclic graph
//it state that in a graph in there is a edge between u to v u->v
//then the node u always comes before v.
#include<bits/stdc++.h>
using namespace std;
int dfs(int node,int visit[],stack<int>&st,vector<int>adj[]){
    visit[node]=1;

    for(auto it:adj[node]){
        if(!visit[it]){
            dfs(it,visit,st,adj);
        }
    }
    st.push(node);
}

void topological_sort(vector<int>adj[],int n){

    int visit[n]={0};
    stack<int>st;
    for(int i=0;i<n;i++){
        if(!visit[i]){
            dfs(i,visit,st,adj);
        }
    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}
int main()
{
    int m,n;
    cout<<"Enter the nodes and the edges of the graph";
    cin>>m>>n;
    vector<int> adj[n+1];
    int u,v;
    cout<<"Enter the edges of the graph";
    for(int i=0;i<n;i++){
        cin>>u>>v;
        adj[u].push_back(v);
    }
    cout<<endl;
    topological_sort(adj,n);

}