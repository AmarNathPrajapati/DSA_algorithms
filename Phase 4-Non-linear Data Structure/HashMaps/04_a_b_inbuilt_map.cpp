#include<bits/stdc++.h>
using namespace std;

int main(){
    // unordered_map<string,int>um;
    // um.insert({"amar",1});
    // um.insert({"chandan",2});
    // um.insert({"Golu",3});
    unordered_map<int,int>um;
    um.insert({0,1});
    um.insert({2,3});
    um.insert({1,2});
    unordered_map<int,int> :: iterator it = um.begin();
    cout<<"printing unordered map"<<endl;
    while(it!=um.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }
    // map<string,int>m;
    // m.insert({"amar",1});
    // m.insert({"chandan",2});
    // m.insert({"Golu",3});
    map<int,int>m;
    m.insert({0,1});
    m.insert({2,3});
    m.insert({1,2});
    cout<<"printing ordered map"<<endl;
    map<int,int> :: iterator iter = m.begin();
    while(iter!=m.end()){
        cout<<iter->first<<" "<<iter->second<<endl;
        iter++;
    }
return 0;
}