#include<bits/stdc++.h>
using namespace std;

void dfs(int node,vector<vector<int>>&adj,vector<int>&visited,vector<int>&ans){
    visited[node] = 1;
    ans.push_back(node);
    for(auto it:adj[node]){
        if(!visited[it]){
            dfs(it,adj,visited,ans);
        }
    }
}

vector<int> dfsOnGph(vector<vector<int>>&adj){
    int n = adj.size(); //no. of nodes
    vector<int>visited(n,0);
    int start=1;
    // cout<<"tell starting node bro: ";
    // cin>>start;
    vector<int>ans;
    dfs(start,adj,visited,ans);

    return ans;
}

int main(){

    int n,m;
    cout<<"Enter no. of nodes: ";
    cin>>n;
    cout<<"Enter no. of edges: ";
    cin>>m;

    vector<vector<int>>adj(n+1);
    cout<<"Enter edges: ";
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[v].push_back(u);
        adj[u].push_back(v);
    }
    for (int i = 1; i <= n; i++) {
        cout << "Node " << i << ": ";
        for (int neighbor : adj[i]) {
            cout << neighbor << " ";
        }
        cout << endl;
    }
    cout<<endl;

    vector<int>res = dfsOnGph(adj);
    cout<<"DFS traversal: ";
    for(auto it:res)cout<<it<<" ";

}