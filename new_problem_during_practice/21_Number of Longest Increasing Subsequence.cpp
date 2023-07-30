class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp(n,1),cnt(n,1);//two dp array to track the record of lenght and count 
        int maxi = 1;//maximum longest subsequence always 1;
        for(int i = 0; i<n; i++){
            for(int prev = 0; prev<i; prev++){
                if(nums[prev]<nums[i] && 1+dp[prev]>dp[i]){
                    dp[i] = 1 + dp[prev];//update the length
                    //inherit
                    cnt[i]=cnt[prev];//update the count by previous value.
                }else if(nums[prev]<nums[i] && 1+dp[prev]==dp[i]){//if lenght not update
                    cnt[i] = cnt[i] + cnt[prev];//increase number of count
                }
            }
            maxi = max(maxi,dp[i]);//maximum lenght of increasing subsequence 
        }
        int ans = 0;
        for(int i = 0; i<n; i++){
            if(dp[i]==maxi){
                ans = ans+cnt[i];//number of longest increasing subsequence.
            }
        }
        return ans;
    }
};