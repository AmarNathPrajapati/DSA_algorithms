#include <bits/stdc++.h> 
using namespace std;
//initializing the vector
void makeSet(vector<int>&parent, vector<int>&rank,int n){
	for(int i = 0; i<=n; i++){
		parent[i] = i;
		rank[i] = 0;
	}
}
// path compression
int findParent(vector<int> &parent, int node){
	if(parent[node]==node){
		return node;
	}
	return parent[node] = findParent(parent,parent[node]);
}
// union of the set
void unionSet(int u, int v, vector<int>&parent, vector<int>&rank){
	u = findParent(parent,u);
	v = findParent(parent,v);
	if(rank[u]<rank[v]){
		parent[u] = v;
	}else if(rank[u]>rank[v]){
		parent[v] = u;
	}else{
		parent[v] = u;//jase jo parent bane no problem
		rank[u]++;
	}
}
//sorting on the basis of wight
bool cmp(vector<int> &a, vector<int> &b){
	return a[2]<b[2];
}
int kruskalMST(int n, int m, vector<vector<int>> &graph) {
	// Write your code here.
	sort(graph.begin(),graph.end(),cmp);
	vector<int>parent(n+1);
	vector<int>rank(n+1);
	makeSet(parent,rank,n);
	int minW = 0;
	for(int i = 0; i<graph.size(); i++){
		int u = findParent(parent,graph[i][0]);
		int v = findParent(parent,graph[i][1]);
		int wt= graph[i][2];
		if(u != v){
			minW += wt;
			unionSet(u,v,parent,rank);
		}
	}
	return minW;
}