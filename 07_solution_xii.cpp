#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the number" << endl;
    int n;
    cin >> n;
    cout << "Desired Pattern" << endl;
    //method 1
    // char c='A';
    // for (int i = 1;i <= n; i++,c++)
    // {
    //     char c2 = c;
    //     for (int j = i; j <= n+i-1; j++)
    //     {
    //         cout << c2 << " ";
    //         c2++;
    //     }
    //     cout << endl;
    // }

    // method 2
    for (int i = 1;i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
        char c = 'A' + i +j -2;
            cout << c << " ";
            c++;
        }
        cout << endl;
    }
    return 0;
}