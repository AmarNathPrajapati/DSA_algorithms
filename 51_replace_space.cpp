#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"Enter the string"<<endl;
    string s;
    getline(cin,s);
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]==' '){
            s.replace(i,1,"@40");
        }
    }
    
    // s.replace(5,2,"55");// 5 index se 2 character ko replace kar do
    cout<<s;

return 0;
}