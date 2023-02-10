#include<bits/stdc++.h>
using namespace std;
//detect cycle using BFS
bool isCycleBFS(int src,unordered_map<int,bool>&visited,
unordered_map<int, list<int>>&adj ){
    //create a parent map
    unordered_map<int,int>parent;
    parent[src] = -1;//source node
    visited[src] = 1;
    queue<int> q;
    q.push(src);
    while(!q.empty()){
        int front = q.front();
        q.pop();
        for(auto nhr: adj[front]){
            if(visited[nhr]==true && nhr != parent[front]){
                return true;
            }else if(!visited[nhr]){
                q.push(nhr);
                visited[nhr] = 1;
                parent[nhr] = front;
            }
        }
    }
    return false;

}
string cycleDetection (vector<vector<int>>& edges, int n, int m)
{
    // Write your code here.
    //using BFS
    //create a adjacency list for undirected graph
    unordered_map<int, list<int>>adj;
    for(int i = 0; i<edges.size();i++){
        int u = edges[i][0];
        int v = edges[i][1];
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    //visited map
    unordered_map<int, bool>visited;
    //handle disconnected components
    for(int i= 0; i<n; i++){
        if(!visited[i]){
            bool ans = isCycleBFS(i,visited,adj);
            if(ans==1){
                return "Yes";
            }
        }
    }
    return "No";
    //detect cycle using BFS
}
