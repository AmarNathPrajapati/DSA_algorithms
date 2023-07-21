class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
        //find the adjacency list for the undirected graph
        vector<vector<pair<int,double>>>adj(n);
        for(int i = 0;i <edges.size(); i++){
            int u = edges[i][0];
            int v = edges[i][1];
            adj[u].push_back({v,succProb[i]});
            adj[v].push_back({u,succProb[i]});
        }
        //answer will be dist[end]
        vector<double>dist(n,0.0);
        dist[start] = 1.0;//maximum probabily for the starting node
        //using modified Dijkshtra's algorithm
        queue<int>q;
        q.push(start);
        while(!q.empty()){
            int front = q.front();
            q.pop();
            //processing the adjacent node of the front
            for(auto x: adj[front]){
                int node = x.first;//adjacnet node
                double prob = x.second;
                double newProb = dist[front]*prob;
                if(newProb > dist[node]){
                    //updata the probabilty
                    dist[node] = newProb;
                    q.push(node);
                }
            }
        }
        return dist[end];
    }
};