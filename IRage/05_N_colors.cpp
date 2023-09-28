#include<bits/stdc++.h>
using namespace std;

int min_changes(vector<vector<int>>& tiles) {
int n = tiles.size();
int count = 0;

// Check each row
for (int i = 0; i < n; i++) {
    vector<int> colors(n);
    vector<int> finishes(n);

    // Count the number of each color and finish in the row
    for (int j = 0; j < n; j++) {
        int color = abs(tiles[i][j]);
        int finish = (tiles[i][j] > 0) ? 1 : -1;
        colors[color-1]++;
        finishes[color-1] += finish;
    }

    // Check if any two tiles in the row have the same spec
    for (int j = 0; j < n; j++) {
        int color = abs(tiles[i][j]);
        int finish = (tiles[i][j] > 0) ? 1 : -1;
        if (colors[color-1] > 1 || finishes[color-1] == 0 || finishes[color-1] == 2*finish) {
            count++;
            break;
        }
    }
}

// Check each column
for (int j = 0; j < n; j++) {
    vector<int> colors(n);
    vector<int> finishes(n);

    // Count the number of each color and finish in the column
    for (int i = 0; i < n; i++) {
        int color = abs(tiles[i][j]);
        int finish = (tiles[i][j] > 0) ? 1 : -1;
        colors[color-1]++;
        finishes[color-1] += finish;
    }

    // Check if any two tiles in the column have the same spec
    for (int i = 0; i < n; i++) {
        int color = abs(tiles[i][j]);
        int finish = (tiles[i][j] > 0) ? 1 : -1;
        if (colors[color-1] > 1 || finishes[color-1] == 0 || finishes[color-1] == 2*finish) {
            count++;
            break;
        }
    }
}

return count;
}

int main() {
int t;
cin >> t;

for (int i = 1; i <= t; i++) {
    int n;
    cin >> n;

    vector<vector<int>> tiles(n, vector<int>(n));
    for (int j = 0; j < n; j++) {
        for (int k = 0; k < n; k++) {
            cin >> tiles[j][k];
        }
    }

    int changes = min_changes(tiles);
    cout << "Case #" << i << ": " << changes << endl;
}

return 0;
}