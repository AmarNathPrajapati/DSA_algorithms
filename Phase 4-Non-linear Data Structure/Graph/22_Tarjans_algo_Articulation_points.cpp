#include<iostream>
using namespace std;
void dfs(int node, int parent, int timer, vector<int>&disc,
unordered_map<int,bool>&visited, vector<int>&low, unordered_map<int,list<int>>&adj,
vector<vector<int>>&result){

    visited[node] = true;
    disc[node]=low[node] =timer++;
    int child = 0;
    for(auto nbr: adj[node]){
        if(nbr == parent){//vahi se neeche aaye the, agar parent bhi process karenge toh infinite loop me stuck jayenge.
            continue;//ignore that casee.
        }
        if(!visited[nbr]){
            dfs(nbr,node,timer,disc,visited,low,adj,result);//here node, parent and timer variable updated.
            low[node] = min(low[node],low[nbr]);//while returning low value of that node will be update.
            //it can be that node's child form backedge, so child low updated
            //then parent low must be updated

            //if there is the bridge
            if(low[nbr]>=disc[node] && parent != -1){//that means it is an articulation point.
            //agar ye nahi hota toh kisi aur node ne esake backedge ko update kar diya hota.
                ap[node] = true;
            }
        }else{
            //back edge
            //there is path with low cost.
            low[node] = min(low[node],disc[nbr]);//update according to that cost.
        }
    }
    if(parent == -1 && child > 1){
        ap[node] = true;
    }
    
}
int main(){

    unordered_map<int,list<int>> adj;
    for(int i = 0; i<edges.size(); i++){
        int u = edges[i][0];
        int v = edges[i][1];
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    //start the timer
    int timer = 0;
    //declare the discover, low earlier possible time and parent vector
    vector<int> disc(v);//discovery time : aap us node par kab pahuche.
    vector<int> low(v);//earilest possible time: us node par pahuchane ka.
    int parent = -1;
    unordered_map<int,bool>visited;
    vector<int>ap(n,0);
    for(int i = 0; i<v; i++){
        disc[i] = -1;
        low[i] = -1;
    }
    for (int i = 0; i<v; i++){
        if(!visited[i]){
            dfs(i,parent,timer,disc,visited,low,adj,result);
        }
    }
    return ap;
    //print the articulation point.
return 0;
}