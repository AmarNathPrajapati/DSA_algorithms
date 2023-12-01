#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        // Calculate the maximum number of stones Alice can take
        int stones = 0;

        // Perform operations as long as possible
        while ((b >= 2 && a >= 1) || (c >= 2 && b >= 1)) {
            while (c >= 2 && b >= 1) {
                stones += 3;
                c -= 2;
                b -= 1;
            }
            while (b >= 2 && a >= 1) {
                stones += 3;
                b -= 2;
                a -= 1;
            } 
        }

        cout << stones << endl;
    }

    return 0;
}
