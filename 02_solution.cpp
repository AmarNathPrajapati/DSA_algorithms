#include<iostream>
#include<map>
using namespace std;

int main(){
    map<string,int> m;
    int n;
    cout<<"Enter the number of string"<<endl;
    cin>>n;
    //cout<<m["string"];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter String "<<i+1;
        string s;
        cin>>s;
        // m[s];//declaring key in map, to print in lexical order
        //for frequency
        //intial value of m[s] = 0;
        m[s]+=1;//if same string again come
    }
    for(auto map: m){
        cout<<map.first<<" "<<map.second<<endl;
    }
    // for (int i = 0; i < m.size(); i++)
    // {
    //     cout<<m[i].first<<" "<<m.second<<endl;
    // }
    
    
    
return 0;
}