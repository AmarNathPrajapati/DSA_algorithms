#include<bits/stdc++.h>
using namespace std;
char convertLowercase(char ch)
{
    if ((ch >= 'a' && ch <= 'z')||(ch >= '0' && ch <= '9'))
    {
        return ch;
    }
    else
    {
        return ch - 'A' + 'a';
    }
}
int validChar(char ch){
    if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')||(ch>='0'&&ch<='9')){
        return 1;
    }
    return 0;
}
string removeFaltuCharacter(string s){
    string newstr;
    for (int i = 0; i < s.length(); i++)
    {
        if(validChar(s[i])){
            newstr.push_back(s[i]);
        }
    }
    return newstr;
}
void toLowerCase(string &s){
    for (int i = 0; i < s.length(); i++)
    {
        s[i] = convertLowercase(s[i]);
    }
    
}
bool palindrome(string s){
    int i = 0;
    int j = s.length()-1;
    while (i<=j)
    {
        if(s[i]!=s[j]){
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}

int main(){
    cout<<"Enter the string"<<endl;
    string s;
    cin>> s;
    s = removeFaltuCharacter(s);
    toLowerCase(s);
    if(palindrome(s)){
        cout<<"String is palindrome"<<endl;
    }else{
        cout<<"String is not a palindrome"<<endl;
    }
return 0;
}