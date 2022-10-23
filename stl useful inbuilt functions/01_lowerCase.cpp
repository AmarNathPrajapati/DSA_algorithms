#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout<<"Enter the string"<<endl;
    cin>>s;
    for (int i = 0; i < s.length()-1; i++)
    {
        s[i] = towlower(s[i]);
    }
    cout<<s<<endl;
return 0;
}