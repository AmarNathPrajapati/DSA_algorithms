#include <bits/stdc++.h>
using namespace std;
// 'a' in int means 97;
int main()
{
    while (true)
    {
        cout << "Enter the Character" << endl;
        char a;
        cin >> a;
        int br;
        if (a >= 65 && a <= 90)
        {
            cout << "Capital Letter" << endl;
        }
        else if (a >= 'a' && a <= 'z')
        {
            cout << "Small letter" << endl;
        }
        else if (a >= '0' && a <= '9')
        {
            cout << "Number" << endl;
        }
        else
        {
            cout << "Special Character";
        }
        cout << "Are you want to quit 1/0" << endl;
        cin >> br;
        if (br == 1)
        {
            break;
        }
    }
    return 0;
}