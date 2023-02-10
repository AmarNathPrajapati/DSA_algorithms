#include<bits/stdc++.h>
using namespace std;
// s4: Perfrom DFS traversal.
void dfs(unordered_map<int,list<int>>&adj,unordered_map<int,bool>&visited,
vector<int>&component,int node){
    component.push_back(node);
    visited[node] = true;
    for(auto i: adj[node]){
        if(!visited[i]){
            dfs(adj,visited,component,i);
        }
    }
}
vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
    // Write your code here
    // s1: prepare the adacency list
    unordered_map<int,list<int>>adj;
    for(int i = 0; i<edges.size();i++){
        int u = edges[i][0];
        int v = edges[i][1];
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    // s2: declare ans and visited vector
    vector<vector<int>>ans;
    unordered_map<int,bool>visited;
    // s3: traverse all the components
    for(int i = 0; i<V; i++){
        if(!visited[i]){
            //for various component
            vector<int> component;
            dfs(adj,visited,component,i);
            ans.push_back(component);
        }
    }
    return ans;
}