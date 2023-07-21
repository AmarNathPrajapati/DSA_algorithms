// it will only apply on directed acyclic graph 
// def: linear ordering of vertices such that for every edge u always appear before v in that ordering.
#include <bits/stdc++.h>
void topoSort(int node,vector<bool>&visited,
            stack<int> &s,vector<vector<int>> &adj ){
                
                visited[node] = true;
                for(auto nbr : adj[node]){
                    if(!visited[nbr]){
                        topoSort(nbr,visited,s,adj);
                    }
                }
                //while returning push that element in the stack
                s.push(node);
            }
vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    // Write your code here
    //creating a adjacency list
    // unordered_map<int, list<int>>adj;//TLE
    vector<vector<int>>adj(v);
    for(int i = 0; i<edges.size(); i++){
        int u = edges[i][0];
        int v = edges[i][1];
        adj[u].push_back(v);
    }
    
    //creating visited map
    // unordered_map<int,bool>visited;//TLE
    vector<bool>visited(v);
    //tracking the element for topological sort
    stack<int> s;
    //call dfs for all the component
    for(int i = 0; i< v; i++){
        if(!visited[i]){
            topoSort(i,visited,s,adj);
        }
    }
    vector<int> ans;
    while(!s.empty()){
        int top = s.top();
        s.pop();
        ans.push_back(top);
    }
    return ans;
}