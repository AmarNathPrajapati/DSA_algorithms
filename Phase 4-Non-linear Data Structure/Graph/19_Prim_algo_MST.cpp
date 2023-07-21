#include <bits/stdc++.h> 
using namespace std;
vector<pair<pair<int, int>, int>> calculatePrimsMST(int n, int m, 
vector<pair<pair<int, int>, int>> &g)
{
    // Write your code here.
    //creating adjacency list for undirected weighted graph
    unordered_map<int,list<pair<int,int>>>adj;
    for(int i = 0; i<g.size(); i++){
        int u = g[i].first.first;
        int v = g[i].first.second;
        int w = g[i].second;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    } 
    //creating key, mst and parent vector
    vector<int> key(n+1);//just tracking the minimum distance
    vector<int> parent(n+1);//to identify the parent node.
    vector<bool> mst(n+1);//checking the node which are already in the mst.
    //intializing the vectors
    for(int i = 0; i<=n; i++){
        key[i] = INT_MAX;
        parent[i] = -1;
        mst[i] = false;
    }
    //let's start the algo
    key[1] = 0;
    parent[1] = -1;
    for (int i  = 1; i<n; i++){
        int mini = INT_MAX;
        int u;//updation in mst

        for(int v = 1; v<=n; v++){
            if(mst[v]==false &&  key[v] <mini){
                u = v;//minimum cost of node found.
                mini = key[v];//updation in key vector.
            }
        }
        mst[u] = true;//include that edge
        //agar koi doosara min cost the edge mil jata hai to
        for(auto it: adj[u]){
            int v = it.first;
            int w = it.second;
            if(mst[v]==false && w<key[v]){//agar mst me include nahi hai and weight already kma hai.
                parent[v] = u;
                key[v] = w;
            }
        }
    }
    vector<pair<pair<int, int>, int>> result;
    for(int i = 2; i<= n;i++){
        result.push_back({{parent[i],i},key[i]});
    }
    return result;  
}







//gfg

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        // code here
        vector<int>key(V);//for the minimum distance.
        vector<int>parent(V);//for the parent tree.
        vector<bool>mst(V);//for mst
        
        //initialization of each node
        for(int i = 0; i<V; i++){
            key[i] = INT_MAX;
            parent[i] = -1;
            mst[i] = false;
        }
        
        //lets start the algo
        key[0] = 0;
        for(int i = 0; i<V; i++){
            int mini = INT_MAX;//find minimum distance
            int u;//updation in mini
            //check node with minimum distance
            for(int i = 0; i<V; i++){
                if(mst[i]==false && key[i]<mini){
                    u = i;
                    mini = key[i];
                }
            }
            mst[u] = true;//include in the mst
            for(int j = 0; j<adj[u].size();j++){
                int v= adj[u][j][0];
                int w= adj[u][j][1];
                if(mst[v] == false && w<key[v]){
                    parent[v] = u;
                    key[v] = w;
                }
            }
        }
        int sum = 0;
        for(int i = 0; i<key.size(); i++){
            sum  = sum + key[i];
        }
        return sum;
    }
};

