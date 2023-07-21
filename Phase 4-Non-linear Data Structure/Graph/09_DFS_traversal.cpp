//              Amar Nath Prajapati                       Roll No. 12011051
#include<bits/stdc++.h>
using namespace std;
// s4: Perfrom DFS traversal.
void dfs(unordered_map<int,list<int>>&adj,unordered_map<int,bool>&visited,
vector<int>&component,int node){
    component.push_back(node);
    visited[node] = true;
    for(auto i: adj[node]){
        if(!visited[i]){
            dfs(adj,visited,component,i);
        }
    }
}
vector<vector<int>> depthFirstSearch(int V, vector<pair<int,int>> &edges)
{
    // Write your code here
    // s1: prepare the adacency list
    unordered_map<int,list<int>>adj;
    for(int i = 0; i<edges.size();i++){
        int u = edges[i].first;
        int v = edges[i].second;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    // s2: declare ans and visited vector
    vector<vector<int>>ans;
    unordered_map<int,bool>visited;
    // s3: traverse all the components
    for(int i = 0; i<V; i++){
        if(!visited[i]){//jo nodes first component me nahi hoga, vahi again dfs start karenga.
            //for various component
            vector<int> component;
            dfs(adj,visited,component,i);
            ans.push_back(component);
        }
    }
    return ans;
}
int main(){
    cout<<"Enter your name"<<endl;
    string name;
    cin>>name;
    cout<<"Enter the roll No."<<endl;
    long long int rollNo;
    cin>> rollNo;

    cout <<"Let's Start DFS...."<<endl;
    cout<<endl;
    cout<<endl;
    int vertex;
    cout<<"Enter the number of the vertex "<<endl;
    cin>>vertex;
    cout<<"Enter the number of the edges "<<endl;
    int edge;
    cin>>edge;
    vector<pair<int,int>>edges;
    for(int i = 0; i<edge; i++){
        pair<int,int>p;
        cout<<"Enter the edges pair: ";
        cin>>p.first;
        cin>>p.second;
        edges.push_back(p);
    }
    vector<vector<int>> DFStraversal = depthFirstSearch(vertex, edges);
    cout<<"DFS Traversal: ";
    for(auto val: DFStraversal){
        for(auto node: val){
            cout<<node<<" ";
        }
    }
    cout<<endl;
}