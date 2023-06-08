#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"Enter  the string "<<endl;
    string s;
    getline(cin,s);
    while (s.length()!=0 && s.find("abc")<s.length())
    {
        s.erase(s.find("abc"),3);
    }
    cout<<s;    
    
return 0;
}