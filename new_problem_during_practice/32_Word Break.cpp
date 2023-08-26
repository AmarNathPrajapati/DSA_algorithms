class Solution {
public:
    unordered_set<string>st;
    bool solve(int index, string &s){
        int n = s.length();
        if(index==n){
            return true;
        }
        if(st.find(s) != st.end()){
            return true;
        }
        for(int l = 1 ;l<n; l++){
            //find substring of size l
            string temp = s.substr(index,l);
            if((st.find(temp) != st.end()) && solve(index+l,s)){
                return true;
            }
        }
        return false;
    }
    bool solveMemo(int index, string &s,vector<int>&dp){
        int n = s.length();
        if(index==n){
            return true;
        }
        if(st.find(s) != st.end()){
            return true;
        }
        if(dp[index] != -1){
            return dp[index];
        }
        for(int l = 1 ;l<n; l++){
            //find substring of size l
            string temp = s.substr(index,l);
            if((st.find(temp) != st.end()) && solveMemo(index+l,s,dp)){
                return dp[index] = true;
            }
        }
        dp[index] = false;
        return dp[index];
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        for(int i = 0; i<wordDict.size(); i++){
            st.insert(wordDict[i]);
        }
        // return solve(0,s);
        int size = s.length();
        vector<int>dp(size+2,-1);
        return solveMemo(0,s,dp);
        
    }
};
