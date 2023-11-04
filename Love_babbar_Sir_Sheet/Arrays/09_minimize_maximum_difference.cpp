#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>&v, int k){
    sort(v.begin(),v.end());
    int n = v.size();
    int ans = v[n-1]-v[0];
    for(int i = 1; i<n; i++){
        if(v[i]-k<0){
            continue;
        }
        int maxi = max(v[i-1]+k, v[n-1]-k);
        int mini = min(v[0]+k,v[i]-k);
        ans = min(ans,maxi-mini);
    }
    return ans;
}
int main(){
    vector<int>v = {2,5,3,1,6,7};
    int k = 2;
    int ans = solve(v,k);
    cout<<"Minimum of difference of maximum height between largest and smallest tower after k modifications:  "<<ans<<endl;
    return 0;
}