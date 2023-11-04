#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>&v){
    int ans = 0;
    for(auto val: v){
        if(val & 1){
            ans = ans+val;
        }
    }
    return ans;
}
int main(){
    vector<int>v =  {1, 4, 6, 7, 10, 12, 11, 5};
    int ans = solve(v);
    cout<<"Required ans is: "<<ans<<endl;
    return 0;
}