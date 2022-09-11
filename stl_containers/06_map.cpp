#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
    map<int,string> m;
    m[2] = "Amar Nath";
    m[1] = "Chandan";
    m[3] = "Golu";
    m[4] = "pandit";
    m.insert(make_pair(6,"Sagar"));
    m.insert({5,"pramod"});
    m[6] = "Arjun";//key should be unique, updation performed
    cout<<m[1];
    //we can iterate map only using the concepts of iterator

    //general technique for traversing

    map<int,string>::iterator it;
    for ( it = m.begin() ; it != m.end(); it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }

    //ninja technique for traversing

    for(auto &map : m){
        cout<<map.first<<" "<<map.second<<endl;//no concern about iterator,begin,end
    }

    // map methods
    //1. find method
    it = m.find(7);//it return iterator
    if(it != m.end()){
    cout<<it->second<<endl;
    }else{
        cout<<"No value found"<<endl;
    }
    //2. erase method
    m.erase(3);
    it = m.find(4);
    m.erase(it);
    //3. clear method
    m.clear();
    for(auto &map :m){
        cout<<map.first<<" "<<map.second<<endl;
    }

return 0;
}