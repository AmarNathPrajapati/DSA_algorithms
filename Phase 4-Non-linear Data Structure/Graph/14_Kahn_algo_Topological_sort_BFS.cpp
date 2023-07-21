#include<bits/stdc++.h>
using namespace std;
vector<int> topologicalSort(vector<pair<int,int>>& edges, int N, int M)
{
	/* 
	   Write your code here
	   Return any valid topolocial Sort
	   Verdict: 'Valid' or 'Invalid'
	*/
	//creating adjacency list
	unordered_map<int, list<int>> adj;
	for(int i = 0; i< edges.size(); i++){
		int u = edges[i].first;
		int v = edges[i].second;
		adj[u].push_back(v);//for the dircted graph
	}
	//calculating indegree
	vector<int> indegree(N+1);
	for(auto i: adj){
		for(auto j: i.second){
			indegree[j]++;//indegree of child node thru parent node.
		}
	}
	//push 0 indegree element in the queue
	queue<int> q;
	for(int i = 1; i<=N; i++){
		if(indegree[i]==0){
			q.push(i);
		}
	}
	//doing BFS
	vector<int>ans;
	while(!q.empty()){
		int front = q.front();
		q.pop();
		ans.push_back(front);
		//updating the neighbour indegree
		for(auto nbr: adj[front]){//front element ko nikalane ke baad usake sabhi neighbor ke degree kam kar do.
			indegree[nbr]--;
			if(indegree[nbr]==0){
				q.push(nbr);
			}
		}
	}
	return ans;
} 
