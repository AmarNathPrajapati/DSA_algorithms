#include<bits/stdc++.h>
using namespace std;

void DFS(vector<int> adj[],unordered_map<int,bool>visited,vector<int>&ans,int node)
{
    stack<int> s;
    s.push(node);
    visited[node] = true;
    while (!s.empty())
    {
        int top = s.top();
        s.pop();
        ans.push_back(top);
        for(auto i:adj[top]){
            if(!visited[i]){
                s.push(i);
                visited[i] = true;
            }
        }
    }
}
int main()
{
    // cout<<"Enter your name"<<endl;
    // string name;
    // cin>>name;
    // cout<<endl;
    // cout<<"Enter the roll No."<<endl;
    // long long int rollNo;
    // cin>> rollNo;
    // cout<<endl;
    // cout <<"Let's Start DFS...."<<endl;
    // cout<<endl;

    cout<<"Enter the total no. of nodes, edges and source node "<<endl;
    int V, E, start;
    cin >> V >> E >> start;
    cout<<endl;
    cout<<"Enter the edges..."<<endl;

    vector<int> adj[V];
    int u, v;
    for (int i = 0; i < E; ++i)
    {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    unordered_map<int,bool>visited;
    vector<int>ans;
    cout << "DFS Traversal using stack: ";
    DFS(adj,visited,ans,start);
    for(auto i: ans){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}

// Enter the total no. of nodes, edges and source node 
// 5 6 0

// Enter the edges...
// 0 1
// 0 4
// 1 2
// 1 3
// 2 3
// 3 4