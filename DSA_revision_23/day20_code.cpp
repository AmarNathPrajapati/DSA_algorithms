//implement a undirected graph
#include<bits/stdc++.h>
using namespace std;
class Graph{
    public:
        //maintain the list of connected node
        map<int,list<int>>adj;
        //connect the nodes
        void addEdge(int u, int v){
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        //print the adjacency list
        void printEdge(){
            for(auto i : adj){
                cout<<i.first<<"->";
                for(auto j: i.second){
                    cout<<j<<" ";
                }
            cout<<endl;
            }
        }
};
int main(){
    Graph g;
    g.addEdge(0,1);
    g.addEdge(0,4);
    g.addEdge(2,1);
    g.addEdge(3,1);
    g.addEdge(2,3);
    g.addEdge(3,4);
    g.printEdge();
}