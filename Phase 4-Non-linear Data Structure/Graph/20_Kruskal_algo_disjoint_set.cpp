#include <bits/stdc++.h> 
using namespace std;
//initializing the vector
void makeSet(vector<int>&parent, vector<int>&rank,int n){
	for(int i = 0; i<=n; i++){
		parent[i] = i;//means i is the parent of i
		rank[i] = 0;//initial rank of each i = 0, because initially no one is parent of any other node.
	}
}
// path compression
int findParent(vector<int> &parent, int node){
	if(parent[node]==node){//node ka parent node matlab yahi stop kar jana hai.
		return node;
	}
	return parent[node] = findParent(parent,parent[node]);//esase ham heirarchically upper ja rahe hai.
	//parent ka parent return kar raha hai, means here path compression applied.
}
// union of the set
void unionSet(int u, int v, vector<int>&parent, vector<int>&rank){
	u = findParent(parent,u);
	v = findParent(parent,v);
	//jiska rank jyada hoga, that node will be parent.
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
	sort(graph.begin(),graph.end(),cmp);//sorting on the basis of weight.
	vector<int>parent(n+1);
	vector<int>rank(n+1);
	makeSet(parent,rank,n);
	int minW = 0;
	for(int i = 0; i<graph.size(); i++){
		int u = findParent(parent,graph[i][0]);
		int v = findParent(parent,graph[i][1]);
		int wt= graph[i][2];
		if(u != v){//agar same parent nahi hai, toh mai union kar deta hoon.
			minW += wt;
			unionSet(u,v,parent,rank);
		}
	}
	return minW;
}