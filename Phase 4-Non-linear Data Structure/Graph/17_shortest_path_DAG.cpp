#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class graph{
    public:
        unordered_map<int,list<int>>adj;// using adjacency list
        void addEdge(int u, int v , bool direction){
            //if direction 0 means: undirected
            // direction 1 means: directed
            adj[u].push_back(v);
            if(direction==0){
                adj[v].push_back(u);// now direction is from both.
            }
        }
        void printAdjList(){
            for(auto i: adj){
                cout<<i.first<<"->";
                for(auto j: i.second){
                   cout<<j<<",";
                }
                cout<<endl;
            }
        }
        void getShortestPath(int src, vector<int>&dist,stack<int>&topo){
            dist[src] = 0;
            while(!topo.empty()){
                int top = topo.top();
                topo.pop();
                if(!dist[top] != INT_MAX){//we are interested to process 
                    for(auto i: adj[top]){
                        if(dist[top] + i.second < dist[i.first]){
                            dist[i.first]  = dist[top] + ii.second;//update the distance.
                        }
                    }
                }
            }
        }

};
int main(){
    int node;
    int edge;
    graph g;
    g.addEdge(0,1,0);
    g.addEdge(0,4,0);
    g.addEdge(1,3,0);
    g.addEdge(1,2,0);
    g.addEdge(2,3,0);
    g.addEdge(3,4,0);
    g.printAdjList();
return 0;
}