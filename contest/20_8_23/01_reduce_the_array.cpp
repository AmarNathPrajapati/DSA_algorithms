#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool canReduceToOneElement(vector<int>& arr) {
    // Count the frequency of each unique element in the array
    vector<int> freq(101, 0);
    for (int num : arr) {
        freq[num]++;
    }

    // Find the maximum frequency
    int maxFreq = *max_element(freq.begin(), freq.end());

    // If the majority element (or equivalent) has enough frequency, we can reduce the array
    return maxFreq >= arr.size() - maxFreq;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        if (canReduceToOneElement(arr)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
