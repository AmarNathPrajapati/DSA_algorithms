#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> xi(n), z(n);
        for (int i = 0; i < n; ++i) {
            cin >> xi[i];
        }

        for (int i = 1; i < n; ++i) {
            z[i] = xi[i] ^ xi[i - 1];
        }

        vector<int> y(n);

        int carry = 0;
        for (int i = 0; i < n; ++i) {
            int mask = 1;
            int val = 0;
            for (int j = 0; j < 31; ++j) {
                if ((z[i] & mask) == 0 && (carry & mask) == 0) {
                    val |= mask;
                }
                mask <<= 1;
            }
            y[i] = val;
            carry ^= xi[i] ^ y[i];
        }

        for (int i = 0; i < n; ++i) {
            cout << y[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
