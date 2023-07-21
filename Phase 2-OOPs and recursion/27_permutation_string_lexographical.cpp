#include <bits/stdc++.h>
void solve(string str, vector<string>&ans, int i){
    if(i>=str.length()){
        ans.push_back(str);
        return;
    }
    for(int j = i; j<str.length(); j++){
        swap(str[i],str[j]);
        solve(str,ans,i+1);
        //backtrack
        swap(str[i],str[j]);
    }

}
vector<string> generatePermutations(string &str)
{
    // write your code here

    vector<string>ans;
    int i = 0;
    solve(str,ans,i);
    sort(ans.begin(),ans.end());
    return ans;
}