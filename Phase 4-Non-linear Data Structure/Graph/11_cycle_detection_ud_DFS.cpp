#include<bits/stdc++.h>
using namespace std;
//detect cycle using DFS
bool isCycleDFS(int node, int parent, unordered_map<int,bool> &visited,
unordered_map<int, list<int>>&adj){
    visited[node] = true;
    for(auto nh: adj[node]){
        if(!visited[nh]){
            bool cycleDetect = isCycleDFS(nh,node,visited,adj);
            if(cycleDetect){
                return true;
            }
        }else if(nh != parent){
            return true;
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
    //visited map and parent
    unordered_map<int, bool>visited;
    //handle disconnected components
    for(int i= 0; i<n; i++){
        if(!visited[i]){
            // bool ans = isCycleBFS(i,visited,adj);
            bool ans = isCycleDFS(i,-1,visited,adj);
            if(ans==1){
                return "Yes";
            }
        }
    }
    return "No";
    //detect cycle using BFS
}
