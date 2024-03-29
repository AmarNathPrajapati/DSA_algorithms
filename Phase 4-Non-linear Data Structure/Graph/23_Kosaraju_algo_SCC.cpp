#include<bits/stdc++.h>
using namespace std;

void dfs(int node, unordered_map<int,bool>&visited,
	stack<int>&st, unordered_map<int,list<int>>&adj){
		visited[node] = true;
		for(auto nbr: adj[node]){
			if(!visited[nbr]){
				dfs(nbr,visited,st,adj);
			}
		}
		st.push(node);
}
void revDfs(int node, unordered_map<int,bool>&visited,
		unordered_map<int,list<int>>&adj){
		visited[node] = true;
		for(auto nbr: adj[node]){
			if(!visited[nbr]){
				revDfs(nbr,visited,adj);
			}
		}
}
int stronglyConnectedComponents(int v, vector<vector<int>> &edges)
{
	// Write your code here.
	// creating adjacency list for the directed graph
	unordered_map<int,list<int>>adj;
	for(int i = 0; i<edges.size(); i++){
		int u = edges[i][0];
		int v = edges[i][1];
		adj[u].push_back(v);
	}
	//topoplogical sort
	stack<int> st;
	unordered_map<int,bool>visited;
	for(int i = 0; i<v; i++){
		if(!visited[i]){
			dfs(i,visited,st,adj);
		}
	}
	//creating a transpose graph
	unordered_map<int,list<int>> transpose;
	for(int i = 0; i<v; i++){
		visited[i] = 0;
		for(auto nbr: adj[i]){
			transpose[nbr].push_back(i);
		}
	}
	//dfs call using above order
	int count = 0;
	while(!st.empty()){
		int top = st.top();
		st.pop();
		if(!visited[top]){
			count++;
			revDfs(top,visited,transpose);//it means in every revDFS we traverse comple scc
		}
	}
	return count;
}