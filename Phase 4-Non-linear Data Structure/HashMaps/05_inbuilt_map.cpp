/*
Ordered map or map
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
//declaration
    map<string,int> m;
//initialization
    m["amar"] = 0;
    m["amar"] = 1;
    pair<string,int> p0 = {"amar",4};//didn't update
    m.insert(p0);
//using pairs
    pair<string,int> p = make_pair("Chandan",2);
    m.insert(p);
    pair<string,int> p3 = make_pair("Chandan",3);//didn't update
    m.insert(p3);
    pair<string,int> p2 = {"Golu",3};
    m.insert(p2);
//searching in map
    cout<<"m['amar']   "<<m["amar"]<<endl;
    cout<<"m.at('amar')   "<<m.at("amar")<<endl;
    cout<<"m.at('Chandan')   "<<m.at("Chandan")<<endl;
    // cout<<"m.at('pandit')  "<<m.at("pandit")<<endl; //error
    // cout<<"m['pandit']    "<<m["pandit"]<<endl;
    cout<<"m['pandit']    "<<m["pandit"]<<endl;
    cout<<"m.at('pandit')  "<<m.at("pandit")<<endl; //not error
//size
    cout<<"m.size      "<<m.size()<<endl;
//count - (present or absent)
    cout<<"m.count('chandan')   "<<m.count("Chandan")<<endl;
//erase
    cout<<"m.erase('pandit')   "<<m.erase("pandit")<<endl;
    // cout<<"m.at('pandit')  "<<m.at("pandit")<<endl;//error
//traversing of map using for loop
    cout<<"traversing of map using for loop"<<endl;
    for(auto i : m){
        cout<<i.first<<" "<<i.second<<endl;
    }
//traversing using iterators
    cout<<"traversing using iterators"<<endl;
    map<string,int> :: iterator it = m.begin();
    while(it != m.end()){
        cout<<it->first<<"  "<<it->second<<endl;
        it++;
    }

return 0;
}