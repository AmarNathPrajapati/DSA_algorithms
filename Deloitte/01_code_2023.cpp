#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i = 0; i<n; i++){
        int data;
        cin>>data;
        v.push_back(data);
    }
    int ans = 0;
    int rank = v[0];
    for(int i = 1; i<n; i++){
        if(rank>v[i]){
            rank = v[i];
            ans++;
        }
    }
    cout<<"answer is: "<<ans<<endl;
    return 0;
}