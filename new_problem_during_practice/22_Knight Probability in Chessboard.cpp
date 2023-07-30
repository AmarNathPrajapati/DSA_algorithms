// class Solution {
// public:
//     bool isValid(int r, int c,int n){
//         if((r<0 ||  r>=n || c<0 || c>=n)){
//             return false;
//         }
//         return true;
//     }
//     double solve(int n,int k, int r, int c, vector<vector<int>>&dir){
//         if(k==0){
//             return 1;
//         }
//         if(isValid(r,c,n)==false){
//             return 0;
//         }
//         double pb = 0;
//         for(int i = 0; i<8; i++){
//             pb = pb + solve(n, k-1, r+dir[i][0], c+dir[i][1], dir)/8.0;
//         }
//         return pb;
//     }
//     double knightProbability(int n, int k, int row, int column) {
//         vector<vector<int>>dir{
//             {2,-1},
//             {2,1},
//             {-2,-1},
//             {-2,1},
//             {1,-2},
//             {-1,-2},
//             {1,2},
//             {-1,2}
//         };
//         return solve(n,k,row,column,dir);
//     }
// };
class Solution {
public:
    double knightProbability(int n, int k, int row, int column) {
        vector<vector<double>> dp(n, vector<double>(n, 0));
        dp[row][column] = 1;

        vector<vector<int>> moves = {{-2, -1}, {-2, 1}, {-1, -2}, {-1, 2}, {1, -2}, {1, 2}, {2, -1}, {2, 1}};

        for (int move = 1; move <= k; move++) {
            vector<vector<double>> newDp(n, vector<double>(n, 0));
            for (int r = 0; r < n; r++) {
                for (int c = 0; c < n; c++) {
                    for (const auto& m : moves) {
                        int newR = r + m[0];
                        int newC = c + m[1];
                        if (isValid(newR, newC, n)) {
                            newDp[r][c] += dp[newR][newC] / 8.0;
                        }
                    }
                }
            }
            dp = newDp;
        }

        double probability = 0;
        for (int r = 0; r < n; r++) {
            for (int c = 0; c < n; c++) {
                probability += dp[r][c];
            }
        }

        return probability;
    }

    bool isValid(int r, int c, int n) {
        return r >= 0 && r < n && c >= 0 && c < n;
    }
};