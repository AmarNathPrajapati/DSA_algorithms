class Solution {
public:
    vector<pair<int,int>> operations= {{100,0},{75,25},{50,50},{25,75}};
    double solve(double a , double b,vector<vector<double>>&dp){
        //recursive base case
        if(a<=0 && b<=0){
            return 0.5;
        }
        if(a<=0){
            return 1.0;
        }
        if(b<=0){
            return 0.0;
        }
        if(dp[a][b] != -1.0){
            return dp[a][b];
        }
        double prob = 0.0;
        for(auto &val:operations){
            int a_taken = val.first;
            int b_taken = val.second;
            prob += solve(a-a_taken,b-b_taken,dp);
        }
        dp[a][b] = 0.25*prob;
        return dp[a][b];
    }
    double soupServings(int n) {
        if(n>=5000){
            return 1;
        }
        vector<vector<double>>dp(n+1,vector<double>(n+1,-1.0));
        return solve(n,n,dp);
    }
};