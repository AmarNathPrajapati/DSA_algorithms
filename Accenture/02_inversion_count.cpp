#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>&v){
    int ans = 0;
    for(int i = 0; i<v.size();i++){
        for(int j= i+1; j<v.size(); j++){
            if(v[i]>v[j]){
                ans++;
            }
        }
    }
    return ans;
}
int main(){
    vector<int>v = {1,20,6,4,5};
    int ans = solve(v);
    cout<<"Required answer is: "<<ans<<endl;
return 0;
}