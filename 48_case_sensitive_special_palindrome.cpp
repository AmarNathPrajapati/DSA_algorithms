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
        if ((s[i] >= ' ' && s[i] <= '/')||(s[i]>=':'&&s[i]>='@'))
        {
            i++;
        }
        if ((s[j] >= ' ' && s[j] <= '/')||(s[j]>=':'&&s[j]>='@'))
        {
            j--;
        }
        if (convertLowercase(s[i]) != convertLowercase(s[j]))
        {
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}
int main()
{
    cout << "Enter the string" << endl;
    string str;
    cin >> str;
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