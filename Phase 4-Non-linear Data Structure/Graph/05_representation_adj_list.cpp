
//adjacency list of graph 1 for directed and 0 for undirected.
unordered_map<int,list<int>>adj;// using adjacency list
        void addEdge(int u, int v , bool direction){
            //if direction 0 means: undirected
            // direction 1 means: directed
            adj[u].push_back(v);
            if(direction==0){
                adj[v].push_back(u);// now direction is from both.
            }
        }
// for only undirected
unordered_map<int,list<int>>adj;// using adjacency list
        void addEdge(int u, int v , bool direction){
            adj[u].push_back(v);
            adj[v].push_back(u);// now direction is from both.
        }
// for directed graph
unordered_map<int,list<int>>adj;// using adjacency list
        void addEdge(int u, int v , bool direction){
            adj[u].push_back(v);
        }
//adj list using vector<vector<int>>
#include <bits/stdc++.h> 
vector < vector < int >> printAdjacency(int n, int m, vector < vector < int >> & edges) {
    // Write your code here.
    // n is totao nodes and e is total edges
    vector<int>ans[n];
    for(int i  = 0; i<m; i++){
        int u = edges[i][0];
        int v = edges[i][1];
        ans[u].push_back(v);
        ans[v].push_back(u);
    }
    vector<vector<int>>adj(n);
    for(int i = 0; i<n; i++){
        //pushing that node also
        adj[i].push_back(i);
        for(int j = 0; j<ans[i].size();j++){
            adj[i].push_back(ans[i][j]);
        }
    }
    return adj;
}
// creating adjacency list for wieghted graph
    unordered_map<int,list<pair<int,int>>>adj;
    for(int i = 0; i<edges; i++){
        int u = vec[i][0];
        int v = vec[i][1];
        int w = vec[i][2];
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }