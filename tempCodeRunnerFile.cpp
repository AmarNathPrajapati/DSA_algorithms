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
    bool ans = true;
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
            ans = false;
        }
        i++;
        j--;
    }
    return ans;
}