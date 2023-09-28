class Solution {
public:
    int dp[51];
    int solve(int index, string &s, unordered_set<string>&st ){
        int n = s.length();
        if(index>=n){
            return 0;
        }
        if(dp[index] != -1){
            return dp[index];
        }
        int minExtra = n;
        string newStr = "";
        for(int i = index; i<n; i++){
            int currExtra;
            newStr.push_back(s[i]);
            if(st.find(newStr)==st.end()){
                currExtra = newStr.length();
            }else{
                currExtra = 0;
            }
            int remainExtra = solve(i+1,s,st);
            int totalExtra = currExtra + remainExtra;
            minExtra = min(totalExtra,minExtra);
        }
        return dp[index] = minExtra;
    }
    int minExtraChar(string s, vector<string>& dictionary) {
        memset(dp,-1,sizeof(dp));
        unordered_set<string>st;
        for(auto val: dictionary){
            st.insert(val);
        }
        return solve(0,s,st);
    }
};