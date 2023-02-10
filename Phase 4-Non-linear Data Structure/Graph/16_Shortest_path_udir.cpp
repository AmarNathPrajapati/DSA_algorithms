#include<bits/stdc++.h>
using namespace std;
vector<int> shortestPath( vector<pair<int,int>> edges , int n , int m, int s , int t){
	
	// Write your code here
	//creating adjacency list
	unordered_map<int,list<int>>adj;
	for(int i = 0; i<edges.size(); i++){
		int u = edges[i].first;
		int v = edges[i].second;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	//creating visited map , parent map and a queue
	unordered_map<int,int>parent;
	unordered_map<int,int>visited;	
	queue<int> q;
	//given source node s
	q.push(s);
	visited[s] = 1;
	parent[s] =  -1;
	while(!q.empty()){
		int front = q.front();
		q.pop();
		for(auto i: adj[front]){
			if(!visited[i]){
				visited[i] = 1;
				parent[i] = front;
				q.push(i);
			}
		}
	}
	//prepare shortest path
	vector<int>ans;
	//given destination node t
	ans.push_back(t);
	int currNode = t;
	while(currNode != s){
		currNode = parent[currNode];
		ans.push_back(currNode);
	}
	reverse(ans.begin(),ans.end());
	return ans;
}
