#include <bits/stdc++.h> 
using namespace std;
int solveRec(vector<int>&num, int target){
    //base
    if(target == 0){
        return 0;
    }
    if(target < 0){
        return INT_MAX;
    }
    int mini = INT_MAX;
    for(int i = 0; i<num.size(); i++){
        int ans = solveRec(num,target-num[i]);
        if(ans != INT_MAX){
            mini = min(mini,1+ans);
        }
    }
    return mini;
}
int solveMem(vector<int>&num, int target,vector<int> &dp){
    //base
    if(target == 0){
        return 0;
    }
    if(target < 0){
        return INT_MAX;
    }
    if(dp[target] != -1){
        return dp[target];
    }
    int mini = INT_MAX;
    for(int i = 0; i<num.size(); i++){
        int ans = solveMem(num,target-num[i],dp);
        if(ans != INT_MAX){
            mini = min(mini,1+ans);
        }
    }
    dp[target] = mini;
    return mini;
}
int solveTab(vector<int>&num, int x){
    //base
    vector<int>dp(x+1,INT_MAX);
    dp[0] = 0;
    for(int i = 1; i<=x; i++){
        for(int j = 0; j<num.size(); j++){
            if(i-num[j]>=0 && dp[i-num[j]] != INT_MAX){
                 dp[i] = min(dp[i],1+dp[i-num[j]]);
            }
        }
    }
    if(dp[x]==INT_MAX){
        return -1;
    }else{
        return dp[x];
    }
}
int minimumElements(vector<int> &num, int x)
{
    // Write your code here.
    // int ans = solveRec(num,x);
    // vector<int>dp(x+1,-1);
    // int ans = solveMem(num,x,dp);
    int ans = solveTab(num,x);
    if(ans==INT_MAX){
        return -1;
    }else{
        return ans;
    }
}