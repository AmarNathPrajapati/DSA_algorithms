#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

int countBeautifulStringPairs(int n, const vector<string>& box) {
    int count = 0;
    unordered_map<char, int> freqCount;

    for (const string& s : box) {
        unordered_map<char, int> freq;
        for (char c : s) {
            freq[c]++;
        }

        for (auto it : freq) {
            char ch = it.first;
            int f = it.second;

            freqCount[ch] += f;
        }
    }

    int oddCount = 0;
    for (auto it : freqCount) {
        if (it.second % 2 != 0) {
            oddCount++;
        }
    }

    count = (oddCount <= 1) ? (n * (n - 1) / 2) : 0;
    return count;
}

int main() {
    int n = 3;
    vector<string> box = {"bbcb", "abccc", "abc"};

    int result = countBeautifulStringPairs(n, box);
    cout << result << endl;  // Output: 3

    return 0;
}
