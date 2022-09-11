#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

int main(){
    unordered_map<int,string> m;
    m[2] = "Amar Nath";
    m[1] = "Chandan";
    m[3] = "Golu";
    m[4] = "pandit";
    m.insert(make_pair(6,"Sagar"));
    m.insert({5,"pramod"});
    // cout<<m[1];
    //we can iterate map only using the concepts of iterator
    unordered_map<int,string>::iterator it;
    for ( it = m.begin() ; it != m.end(); it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
return 0;
}