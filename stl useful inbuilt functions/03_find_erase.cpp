#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout<<"Enter the string"<<endl;
    getline(cin,s);
    cout<<s.find("an")<<endl;//return index of first occurrence
    s.erase(3,3);
    cout<<s<<endl;
return 0;
}