#include<iostream>
#include<unordered_map>
using namespace std;
// if there is comparision and frequency in question, then you must the map or unordered map.
int main(){
    unordered_map<string,int> m;
    int n;
    cout<<"Enter the number of string"<<endl;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter String "<<i+1;
        string s;
        cin>>s;
        // m[s];//declaring key in map, to print in lexical order
        //for frequency
        m[s]+=1;//if same string again come
    }
    cout<<"Enter the number of query"<<endl;
    int q;
    cin>>q;
    for (int i = 0; i < q; i++)
    {
        cout<<"Enter the string"<<endl;
        string s;
        cin>>s;
        cout<<m[s];
    }
    
return 0;
}