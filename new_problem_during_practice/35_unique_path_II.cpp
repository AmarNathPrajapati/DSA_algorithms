class Solution {
public:
    bool isSafe(vector<vector<int>>&m,int x, int y, int row, int col){
        if((x>=0 && x<row) &&(y>=0 && y<col) && m[x][y] ==0){
            return true;
        }else{
            return false;
        }
    }
    int solve(vector<vector<int>>&m,int row,int col,int x, int y){
        //recusive base case
        if(x==row-1 && y== col-1){
            return 1;
        }
        //down move
        int X = x + 1;
        int Y = y;
        int right = 0;
        int down = 0;
        if(isSafe(m,X,Y,row,col)){
             down = solve(m,row,col,X,Y);
        }
        //right move
        X = x;
        Y = y + 1;
        if(isSafe(m,X,Y,row,col)){
             right = solve(m,row,col,X,Y);
        }
        return down+right;

    }
    int solveMemo(vector<vector<int>>&m,int row,int col,int x, int y,vector<vector<int>>&dp){
        //recusive base case
        if(x==row-1 && y== col-1){
            return 1;
        }
        if(dp[x][y] != -1){
            return dp[x][y];
        }
        //down move
        int X = x + 1;
        int Y = y;
        int right = 0;
        int down = 0;
        if(isSafe(m,X,Y,row,col)){
            down = solveMemo(m,row,col,X,Y,dp);
        }
        //right move
        X = x;
        Y = y + 1;
        if(isSafe(m,X,Y,row,col)){
            right = solveMemo(m,row,col,X,Y,dp);
        }
        return dp[x][y] = down+right;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int row = obstacleGrid.size();
        int col = obstacleGrid[0].size();
        vector<vector<int>>dp(row+1,vector<int>(col+1,-1));
        if(obstacleGrid[0][0]==1){
            return 0;
        }

        int n = obstacleGrid.size();
        // return solve(obstacleGrid,row,col,0,0);
        return solveMemo(obstacleGrid,row,col,0,0,dp);
    }
};