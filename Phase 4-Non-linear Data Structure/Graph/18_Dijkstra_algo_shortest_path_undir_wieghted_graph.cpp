#include <bits/stdc++.h> 
using namespace std;
vector<int> dijkstra(vector<vector<int>> &vec, int vertices, int edges, int source) {
    // Write your code here.
    // creating adjacency list for undirected wieghted graph
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
        auto top = *st.begin();//top element of the set
        int nodeDistance = top.first;// distance of node with the source node.
        int topNode = top.second;//this is the actual node.
        st.erase(st.begin());
        //traversing the neighbour
        for(auto nbr: adj[topNode]){
            //dijkstra formula
            if(nodeDistance + nbr.second < dist[nbr.first]){//nodeDistance + nbr_weight < distance of the nbr from source
                auto record = st.find({dist[nbr.first],nbr.first});//if nbr is already in set
                if(record != st.end()){//basically it is updation of the node with minimum distance.
                    st.erase(record);//erase that nbr from the node.
                }
                dist[nbr.first] = nodeDistance + nbr.second;//update the nbr distance 
                st.insert({dist[nbr.first],nbr.first});//insert into the set.
            }
        }
    }
    return dist;


}
