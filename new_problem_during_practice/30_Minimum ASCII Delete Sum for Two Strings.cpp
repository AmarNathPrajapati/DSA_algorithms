class Solution {
public:
    int solve(string s1, string s2, int i, int j,vector<vector<int>>&dp){
        int cost = 0;
        int size1 = s1.length();
        int size2 = s2.length();
        //case1: if the both string traversed
        if(dp[i][j] != -1){
            return dp[i][j];
        }
        if(i == size1 && j == size2){
            cost = 0;
        }
        //case2: if s1 traversed but s2 not
        else if(i==size1){
            cost += solve(s1,s2,i,j+1,dp) + s2[j];
        }else if(j==size2){//s2 traversed but s1 not
            cost += solve(s1,s2,i+1,j,dp) + s1[i];
        }else if(s1[i]==s2[j]){
            cost += solve(s1,s2,i+1,j+1,dp);
        }else{
            //if character not equal then we have to perform deletion with minimum cost
            int first = solve(s1,s2,i+1,j,dp)+s1[i];
            int second = solve(s1,s2,i,j+1,dp)+s2[j];
            cost += min(first,second);
        }
        return dp[i][j]= cost;
    }
    int solveTab(string s1, string s2){
        vector<vector<int>> dp(s1.size() + 1, vector<int>(s2.size() + 1, 0));

        for (int i = 1; i <= s1.size(); i++)
            dp[i][0] = dp[i - 1][0] + s1[i - 1];

        for (int j = 1; j <= s2.size(); j++)
            dp[0][j] = dp[0][j - 1] + s2[j - 1];

        for (int i = 1; i <= s1.size(); i++) {
            for (int j = 1; j <= s2.size(); j++) {
                if (s1[i - 1] == s2[j - 1]) {
                    dp[i][j] = dp[i - 1][j - 1];
                } else {
                    dp[i][j] = min(dp[i - 1][j] + s1[i - 1], dp[i][j - 1] + s2[j - 1]);
                }
            }
        }
        
        return dp[s1.size()][s2.size()];
    }
    int minimumDeleteSum(string s1, string s2) {
        int cost = 0;
        // int n1 = s1.length();
        // int n2 = s2.length();
        // vector<vector<int>>dp(n1+1,vector<int>(n2+1,-1));
        // return solve(s1,s2,0,0,dp);
        return solveTab(s1,s2);
    }
};