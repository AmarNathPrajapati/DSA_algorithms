#include<bits/stdc++.h>
using namespace std;

vector<int>solve(int N){
    vector<int>ans;
    ans.push_back(1);
    for(int i = 2; i<=N; i++){
        int carry = 0;
        for(int j = 0; j<ans.size(); j++){
            int digit = ans[j]*i + carry;
            ans[j] = digit%10;
            carry = digit/10;
        }
        while(carry){
            int digit = carry%10;
            ans.push_back(digit);
            carry = carry/10;
        }
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
int main(){
    int n = 100;
    vector<int>ans = solve(n);
    for(auto val: ans){
        cout<<val<<"";
    }
return 0;
}