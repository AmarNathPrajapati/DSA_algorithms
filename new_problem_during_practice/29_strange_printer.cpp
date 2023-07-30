class Solution {
public:
    int strangePrinter(string s) {
        int n = s.length();
        vector<vector<int>>dp(n,vector<int>(n,0));
        for(int i = 0; i<n; i++){
            dp[i][i] =  1;//cost to print the single character;(i==j means at same place)
        }
        //using memoization techniques
        for(int len = 1; len<n; len++){
            for(int i = 0; i<n-len; i++){
                int j = i + len;
                dp[i][j] = len + 1;//worst case condition 
                if(s[i]==s[j]){
                    dp[i][j] = dp[i][j-1];//if side wala same then no need to increment count
                }else{
                    for(int k = i; k<j; k++){
                        if(s[i] != s[j]){
                            dp[i][j] = min(dp[i][j],dp[i][k]+dp[k+1][j]);//depend on k variable if kth and kth+1 char same or not.
                        }
                    }
                }
            }
        }
        return dp[0][n-1];
    }
};