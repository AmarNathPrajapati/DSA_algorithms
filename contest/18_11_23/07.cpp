#include <iostream>
#include <vector>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int n = 7, m = 7; // Initial values for n and m
    char grid[50][50];

    // Iterate through possible values of n and m
    for (int rows = 1; rows <= 50; ++rows) {
        for (int cols = 1; cols <= 50; ++cols) {
            if ((rows * cols >= a + b) && (rows * cols >= c + d)) {
                n = rows;
                m = cols;
                break;
            }
        }
        if (n != 7) {
            break;
        }
    }

    cout << n << " " << m << endl;

    // Create the grid with connected components
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (i % 2 == 0 || j % 2 == 0) {
                grid[i][j] = 'D';
            } else if (b > 0) {
                grid[i][j] = 'B';
                --b;
            } else if (a > 0) {
                grid[i][j] = 'A';
                --a;
            } else if (d > 0) {
                grid[i][j] = 'D';
                --d;
            } else {
                grid[i][j] = 'C';
                --c;
            }
        }
    }

    // Output the grid
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << grid[i][j];
        }
        cout << endl;
    }

    return 0;
}
