#include<bits/stdc++.h>
using namespace std;
void counting_method(vector<int>&v){
    int n = v.size();
    int count0 = 0, count1 = 0, count2 = 0;
    for(int i = 0; i<n; i++){
        if(v[i]==0){
            count0++;
        }else if(v[i]==1){
            count1++;
        }else {
            count2++;
        }
    }
    int m = count0;
    int n1 = count0 +count1;
    int p = count0 + count1 + count2;
    for(int i = 0; i<n; i++){
        if(i<m){
            v[i] = 0;
        }else if(i>=m && i<n1){
            v[i] = 1;
        }else {
            v[i] = 2;
        }
    }
}
int main(){
    vector<int>v = {0,0,1,1,2,2,1,2,1};
    counting_method(v);
    for(auto val: v){
        cout<<val<<" ";
    }
    return 0;
}