#include<bits/stdc++.h>

using namespace std;

void bfs(int start, vector<vector<int>>&adj,int n){

    vector<int>visited(n,0);
    queue<int>q;
    visited[start]=1;
    q.push(start);

    while(!q.empty()){
        int node = q.front();
        q.pop();
        cout<<node<<" ";

        //now traverse all the neighbours 
        for(int it:adj[node]){
            if(!visited[it]){
                visited[it] = 1;
                q.push(it);
            }
        }

    }
    cout<<endl;
    for(auto it:visited){
        cout<<it<<" ";
    }
}

int main(){

    int n,m;
    cout<<"Enter no.of nodes: ";
    cin>>n;
    cout<<"Enter no.of edges: ";
    cin>>m;

    vector<vector<int>>adj(n);
    cout<<"Enter the edges: ";
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int start;
    cout<<"Enter the starting node for bfs traversal: ";
    cin>>start;

    cout<<"BFS traversal: ";
    bfs(start,adj,n);
    cout<<endl;
}