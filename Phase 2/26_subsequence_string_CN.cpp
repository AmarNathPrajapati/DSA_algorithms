#include <bits/stdc++.h> 
void solve(vector<string> &ans, string output, string &str, int i){
    //base case
    if(i>=str.length()){
        if(output.length()>0){
            ans.push_back(output);
            }
        return ;
    }
    //exclude recursive call
    solve(ans,output,str,i+1);
    //include recursive call
    char e = str[i];
    output.push_back(e);
    solve(ans,output,str,i+1);
}
vector<string> subsequences(string str){
	
	// Write your code here
	vector<string> ans;
    string output;
    int i = 0;
    solve(ans, output,  str , i);
    return ans;
}
