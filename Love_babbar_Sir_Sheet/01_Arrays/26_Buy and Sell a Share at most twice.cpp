//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
int dp[2][100001][3];
int solve(int buy, int i, vector<int>&price, int limit){
    if(i>=price.size()){
        return 0;
    }
    if(limit<=0){
        return 0;
    }
    if(dp[buy][i][limit] != -1){
        return dp[buy][i][limit];
    }
    int profit = INT_MIN;
    if(buy){
        int buyProfit = -price[i] + solve(0,i+1,price,limit);
        int sellProfit = 0 + solve(1,i+1,price,limit);
        profit = max(buyProfit, sellProfit);
    }else{
        int sellProfit = price[i] + solve(1,i+1, price, limit-1);
        int buyProfit = 0 + solve(0, i+1, price, limit);
        profit = max(buyProfit, sellProfit);
    }
    return dp[buy][i][limit]=profit;
}
int maxProfit(vector<int>&price){
    //Write your code here..
    memset(dp,-1, sizeof(dp));
    solve(1,0,price,2);
}

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        vector<int> price(n);
        for(int i=0;i<n;i++) cin>>price[i];
        cout<<maxProfit(price)<<endl;
    }

}

// } Driver Code Ends