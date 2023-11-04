#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v1 = {1,2,3,4,5};
    vector<int>v2 = {2,4,6};
    set<int>s1;
    set<int>s2;
    for(int i = 0; i<v1.size(); i++){
        s1.insert(v1[i]);
    }
    for(int i = 0; i<v2.size(); i++){
        s2.insert(v2[i]);
    }
    //performing intersection
    vector<int>ans;
    for(auto val:s2){
        if(s1.find(val) !=s1.end()){
            ans.push_back(val);
        }
    }
    cout<<"Intersection of arrays are "<<endl;
    for(auto val: ans){
        cout<<val<<" ";
    }
    //performing union operations
    for(auto val: s2){
        if(s1.find(val) == s1.end()){
            s1.insert(val);
        }
    }
    cout<<endl;
    cout<<"union of arrays are "<<endl;
    for(int val: s1){
        cout<<val<<" ";
    }
    return 0;
}