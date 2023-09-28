class Solution {
public:
    bool isSafe(vector<vector<int>>&m,int x, int y,int m1, int n){
        if((x>=0 && x<m1) &&(y>=0 && y<n) && m[x][y] ==1){
            return true;
        }else{
            return false;
        }
    }
    int solve(vector<vector<int>>&m, int m1, int n,int x, int y,vector<vector<int>>&dp){
        //recusive base case
        if(x==m1-1 && y== n-1){
            return 1;
        }
        if(dp[x][y] != -1){
            return dp[x][y];
        }
        //down move
        int X = x + 1;
        int Y = y;
        int count = 0;
        if(isSafe(m,X,Y,m1,n)){
            count +=solve(m,m1,n,X,Y,dp);
        }
        //right move
        X = x;
        Y = y + 1;
        if(isSafe(m,X,Y,m1,n)){
            count +=solve(m,m1,n,X,Y,dp);
        }
        return dp[x][y]=count;
        
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        int count = 0;
        vector<vector<int>>grid(m,vector<int>(n,1));
        return solve(grid,m,n,0,0,dp);
        //  return count;
    }
};

