#include <bits/stdc++.h> 
#include<vector>
using namespace std;
int bellmonFord(int n, int m, int src, int dest, vector<vector<int>> &edges) {
    // Write your code here
    vector<int>distance(n+1,1e9);
    distance[src] = 0;
    for(int i = 0; i<=n ; i++){//because there is no any node with value 0
        for(int j = 0; j<m; j++){
            int u = edges[j][0];
            int v = edges[j][1];
            int wt = edges[j][2];
            if(distance[u] != 1e9 && ((distance[u]+wt)<distance[v])){
                distance[v] = distance[u] + wt;
            }
        }
    }
    //check for negative cycle
    bool flag = 0;
        for(int j = 0; j<m; j++){
            int u = edges[j][0];
            int v = edges[j][1];
            int wt = edges[j][2];
            if(distance[u] != 1e9 && (distance[u]+wt)<distance[v]){
               flag = true;
            }
        }
    if(flag == 0){
        return distance[dest];
    }
    return -1;
}