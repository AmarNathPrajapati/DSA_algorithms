#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v = {1,2,3,4,5};
    int n = v.size();
    int k = 2;
    vector<int>ans(k,0);
    for(int i = 0; i<k; i++){
        ans[i] = v[n-k+i];
    }
    for(int i = 0; i<n-k; i++){
        ans.push_back(v[i]);
    }
    cout<<"After kth cyclic rotation"<<endl;
    for(auto val: ans){
        cout<<val<<" ";
    }
    return 0;
}