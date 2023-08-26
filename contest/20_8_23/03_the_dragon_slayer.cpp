#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    int n, m;
    cin >> n;

    vector<long long> heroStrengths(n);
    for (int i = 0; i < n; ++i) {
        cin >> heroStrengths[i];
    }

    cin >> m;

    vector<pair<long long, long long>> dragons(m);
    for (int i = 0; i < m; ++i) {
        cin >> dragons[i].first >> dragons[i].second;
    }

    sort(heroStrengths.begin(), heroStrengths.end());
    sort(dragons.begin(), dragons.end());

    vector<long long> prefixSum(n + 1, 0);
    for (int i = 0; i < n; ++i) {
        prefixSum[i + 1] = prefixSum[i] + heroStrengths[i];
    }

    for (int i = 0; i < m; ++i) {
        long long dragonDefense = dragons[i].first;
        long long dragonAttack = dragons[i].second;

        int pos = upper_bound(heroStrengths.begin(), heroStrengths.end(), dragonDefense) - heroStrengths.begin();

        long long cost = LLONG_MAX;
        if (pos > 0) {
            cost = min(cost, prefixSum[pos] - dragonDefense);
        }

        if (heroStrengths[0] >= dragonAttack) {
            cost = min(cost, dragonDefense);
        }

        cout << cost << endl;
    }

    return 0;
}
