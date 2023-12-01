#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> flowers(n, 0); // 0 represents a rose, 1 represents a lily

    for (int i = 0; i < m; ++i) {
        int l, r;
        cin >> l >> r;

        // Put lilies in the even positions of the segment
        for (int j = l; j <= r; j += 2) {
            flowers[j - 1] = 1;
        }
    }

    for (int i = 0; i < n; ++i) {
        cout << flowers[i];
    }

    cout << endl;

    return 0;
}
