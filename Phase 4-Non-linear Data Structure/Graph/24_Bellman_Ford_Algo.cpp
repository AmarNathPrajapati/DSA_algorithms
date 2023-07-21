#include <bits/stdc++.h> 
#include<vector>
using namespace std;
int bellmonFord(int n, int m, int src, int dest, vector<vector<int>> &edges) {
    // Write your code here
    vector<int>distance(n+1,1e9);//vector of value infinite for all the node(distance)
    distance[src] = 0;
    for(int i = 1; i<=n ; i++){//we have to apply formula for n-1 times
        for(int j = 0; j<m; j++){//applying formual on all edge
            int u = edges[j][0];
            int v = edges[j][1];
            int wt = edges[j][2];
            if(distance[u] != 1e9 && ((distance[u]+wt)<distance[v])){//formual of bellman ford algorithm
                distance[v] = distance[u] + wt;
            }
        }
    }
    //check for negative cycle
    bool flag = 0;
        for(int j = 0; j<m; j++){//applying formula for one more time, to check the negative cycle.
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