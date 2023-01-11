class Solution {
private:
    void solve(vector<string>&ans, string output, vector<string>&mapping, string digits, int i){
        //base condition
        if(i >= digits.length()){
            ans.push_back(output);
            return;
        }
        //processing
        int index = digits[i] - '0';
        string keyVal = mapping[index];
        for(int j = 0 ; j<keyVal.length(); j++){
            output.push_back(keyVal[j]);
            solve(ans,output,mapping,digits,i+1);
            //backtracking
            output.pop_back();
        }
        
        
    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.length()==0){
            return ans;
        }
        string output;
        vector<string> mapping ={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        int i = 0;
        solve(ans,output,mapping,digits,i);
        return ans;
    }
};