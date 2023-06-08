#include <bits/stdc++.h> 
using namespace std;
char convertLowercase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        return ch - 'A' + 'a';
    }
}
bool checkPalindrome(string s)
{
    int i = 0;
    int j = s.length() - 1;
    while (i <= j)
    {
        if (
            ((s[i]>='a' && s[i]<='z')||(s[i]>='A' && s[i]<='Z')||(s[i]>='0' && s[i]<='9'))
            &&((s[j]>='a' && s[j]<='z')||(s[j]>='A' && s[j]<='Z')||(s[j]>='0' && s[j]<='9'))
            )
        {
            if(s[i] != s[j]){
                return false;
            }else{
                i++;
                j--;
            }
        }else{
            if(
                !((s[i]>='a' && s[i]<='z')||(s[i]>='A' && s[i]<='Z')||(s[i]>='0' && s[i]<='9'))
            ){
                i++;
            }
            if(
                !((s[j]>='a' && s[j]<='z')||(s[j]>='A' && s[j]<='Z')||(s[j]>='0' && s[j]<='9'))
            ){
                j--;
            }
        }
    }
    return true;
}
int main()
{
    cout << "Enter the string" << endl;
    string str;
    getline(cin,str);
    if (checkPalindrome(str))
    {
        cout << "String is palindrome" << endl;
    }
    else
    {
        cout << "String is not a palindrome" << endl;
    }
    return 0;
}