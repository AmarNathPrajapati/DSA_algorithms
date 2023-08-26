#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int operations = 0;
        bool possible = true;
        bool sorted = true;

        for (int i = 0; i < n; ++i) {
            if (a[i] > x) {
                swap(a[i], x);
                operations++;
            }

            if (i > 0 && a[i] < a[i - 1]) {
                sorted = false;
            }
        }

        if (!sorted) {
            for (int i = 0; i < n; ++i) {
                if (a[i] > x) {
                    possible = false;
                    break;
                }
            }
            if (!possible) {
                cout << "-1" << endl;
                continue;
            }
        }

        cout << operations << endl;
    }

    return 0;
}
