#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the number" << endl;
    int n;
    cin >> n;
    cout << "Desired Pattern" << endl;
    for (int i = 1; i <= n; i++)
    {
        char c = 'A';
        for (int j = 1; j <= n; j++)
        {
            cout << c << " ";
            c++;
        }
        cout << endl;
    }

    return 0;
}