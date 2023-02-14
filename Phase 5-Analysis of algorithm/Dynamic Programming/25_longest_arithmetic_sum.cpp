// recursion and memoization

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int solve(int index, int diff , vector<int>&nums){
        if(index < 0){
            return 0;
        }
        int ans = 0;
        for(int j = index-1; j>=0; j--){
            if(nums[index]-nums[j] == diff){
                ans = max(ans,1+solve(j,diff,nums));
            }
        }
        return ans;
    }
    //adding memoization
    int solveMem(int index, int diff , vector<int>&nums,unordered_map<int,int>dp[]){
        if(index < 0){
            return 0;
        }
        if(dp[index].count(diff)){
            return dp[index][diff];
        }
        int ans = 0;
        for(int j = index-1; j>=0; j--){
            if(nums[index]-nums[j] == diff){
                ans = max(ans,1+solveMem(j,diff,nums,dp));
            }
        }
        dp[index][diff]=ans;
        return dp[index][diff];
    }
    //adding tabulation method
    int longestArithSeqLength(vector<int>& nums) {
        int n = nums.size();
        //adding memoization with hashing
        unordered_map<int,int>dp[n+1];
        if(n <= 2){
            return n;
        }
        int ans = 0;
        for(int i = 0; i<n; i++){
            for(int j = i+1; j<n; j++){
                // ans = max(ans,2 + solve(i,nums[j]-nums[i],nums));
                // ans = max(ans,2 + solveMem(i,nums[j]-nums[i],nums,dp));
            }
        }
        return ans;
    }
};

// tabulation method
