#include <bits/stdc++.h> 
using namespace std;
vector<int> dijkstra(vector<vector<int>> &vec, int vertices, int edges, int source) {
    // Write your code here.
    // creating adjacency list for wieghted graph
    unordered_map<int,list<pair<int,int>>>adj;
    for(int i = 0; i<edges; i++){
        int u = vec[i][0];
        int v = vec[i][1];
        int w = vec[i][2];
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
    //initializing all the vertex distance from sounrce node is infinite.
    vector<int>dist(vertices);
    for(int i = 0; i<vertices; i++){
        dist[i] = INT_MAX;
    }
    set<pair<int,int>>st;
    dist[source] = 0;
    st.insert({0,source});
    while(!st.empty()){
        auto top = *st.begin();
        int nodeDistance = top.first;//0
        int topNode = top.second;//src
        st.erase(st.begin());
        //traversing the neighbour
        for(auto nbr: adj[topNode]){
            //dijkstra formula
            if(nodeDistance + nbr.second < dist[nbr.first]){
                auto record = st.find({dist[nbr.first],nbr.first});
                if(record != st.end()){
                    st.erase(record);
                }
                dist[nbr.first] = nodeDistance + nbr.second;
                st.insert({dist[nbr.first],nbr.first});
            }
        }
    }
    return dist;


}
