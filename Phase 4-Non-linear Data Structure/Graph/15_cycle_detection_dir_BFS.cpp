
#include<bits/stdc++.h>
using namespace std;
int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
  // Write your code here.
	//creating adjacency list
	unordered_map<int, list<int>> adj;
	for(int i = 0; i< edges.size(); i++){
		int u = edges[i].first;
		int v = edges[i].second;
		adj[u].push_back(v);
	}
	//calculating indegree
	vector<int> indegree(n+1);
	for(auto i: adj){
		for(auto j: i.second){
			indegree[j]++;
		}
	}
	//push 0 indegree element in the queue
	queue<int> q;
	for(int i = 1; i<=n; i++){
		if(indegree[i]==0){
			q.push(i);
		}
	}
	//doing BFS
  int count = 0;
	while(!q.empty()){
		int front = q.front();
		q.pop();
    count++;
		//updating the neighbour indegree
		for(auto nbr: adj[front]){
			indegree[nbr]--;
			if(indegree[nbr]==0){
				q.push(nbr);
			}
		}
	}
	if(count == n){
    return false;//it means it is direct acyclic graph
  }else{
    return true;// otherwise it have cycle
  }
}