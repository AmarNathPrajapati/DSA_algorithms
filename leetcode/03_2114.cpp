#include<iostream>
#include<string>
using namespace std;

int main(){
    int count = 0;
    string s = "My name is Amar Nath Prajapati";
    // cout<<s.find(" ")<<endl;
    for(int i = 0; i< s.length(); i++){
        if(s[i]==' '){
            count++;
        }
    }
    cout<<count<<endl;
return 0;
}