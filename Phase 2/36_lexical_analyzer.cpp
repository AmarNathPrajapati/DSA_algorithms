#include<iostream>
using namespace std;

int main(){
    string s;
    cout<<"Enter any operator"<<endl;
    cin>>s;
    switch (s[0])
    {
    case '>':
        if(s[1]=='='){
            cout<<"greater than or equal"<<endl;
        }else{
            cout<<"greater than"<<endl;
        }
        break;
    case '<':
        if(s[1]=='='){
            cout<<"less than or equal"<<endl;
        }else{
            cout<<"less than"<<endl;
        }
        break;
    case '!':
        if(s[1]=='='){
            cout<<"Not equal"<<endl;
        }else{
            cout<<"bitwise Not"<<endl;
        }
        break;
    default:
        cout<<"Not a operator"<<endl;
        break;
    }
return 0;
}