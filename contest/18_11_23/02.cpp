#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> strength(n);
    for (int i = 0; i < n; ++i) {
        cin >> strength[i];
    }

    // Sort the strengths
    sort(strength.begin(), strength.end());

    int supportedStewards = 0;

    // Check each steward to see if there exists a steward with lower and higher strength
    for (int i = 1; i < n - 1; ++i) {
        if (strength[i] > strength[0] && strength[i] < strength[n - 1]) {
            ++supportedStewards;
        }
    }

    cout << supportedStewards << endl;

    return 0;
}
