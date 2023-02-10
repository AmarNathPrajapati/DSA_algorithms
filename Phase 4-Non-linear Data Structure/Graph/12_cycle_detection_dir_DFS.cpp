#include<bits/stdc++.h>
using namespace std;
bool checkCycleDFS(int node,unordered_map<int,bool>&visited,
unordered_map<int,bool>&dfsVisited,unordered_map<int, list<int>>&adj ){
  visited[node] = true;
  dfsVisited[node] = true;
  for(auto nbr:adj[node]){//list of neighbours
    if(!visited[nbr]){
      bool cycleDetect = checkCycleDFS(nbr,visited,dfsVisited,adj);
      if(cycleDetect){
        return true;
      }
    }else if(dfsVisited[nbr]){
      return true;
    }
  }
  dfsVisited[node] = false;//game changing point
  return false;
}
int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
  // Write your code here.
  //creating adjacency list for directed graph
  unordered_map<int, list<int>>adj;
  for(int i = 0; i<edges.size();i++){
    int u = edges[i].first;
    int v = edges[i].second;
    adj[u].push_back(v);
  }
  //creating visited map
  unordered_map<int,bool>visited;
  unordered_map<int,bool>dfsVisited;
  //call dfs for all components
  for(int i = 1; i<=edges.size(); i++){
    if(!visited[i]){
      bool cycleFound = checkCycleDFS(i,visited,dfsVisited,adj);
      if(cycleFound){
        return true;
      }
    }
  }
  return false;
}