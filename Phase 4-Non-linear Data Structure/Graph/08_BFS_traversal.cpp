//              Amar Nath Prajapati                       Roll No. 12011051
#include <bits/stdc++.h>
using namespace std;
//s3: perform BFS traversal
void bfs(unordered_map<int,set<int>>&adj,unordered_map<int,bool>&visited,
            vector<int>&ans,int node){
                queue<int>q;
                q.push(node) ;
                visited[node] = true;
                while(!q.empty()){
                    int front = q.front();
                    q.pop();
                    ans.push_back(front);
                    for(auto i: adj[front]){
                        if(!visited[i]){
                            q.push(i);
                            visited[i] = true;
                        }
                    }
                }       
            }
vector<int> BFS(int vertex, vector<pair<int, int>> edges)
{
    // Write your code here
    //s1: prepare adjacency list
    // unordered_map<int,list<int>>adj;  
    unordered_map<int,set<int>>adj;
    for(int i = 0; i<edges.size(); i++){
        int u = edges[i].first;
        int v = edges[i].second;
        adj[u].insert(v);
        adj[v].insert(u);
    }
    //visited map
    unordered_map<int,bool>visited;
    vector<int>ans;
    //s2: traverse all the component of the list
    for(int i = 0; i<vertex; i++){
        if(!visited[i]){
            bfs(adj,visited,ans,i);
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

    cout <<"Let's Start BFS...."<<endl;
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
    vector <int> BFStraversal = BFS(vertex, edges);
    cout<<"BFS Traversal: ";
    for(auto val: BFStraversal){
        cout<<val<<" ";
    }
    cout<<endl;
return 0;
}
//