#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to calculate the greatest common divisor (gcd) of two numbers
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int n;
    cin >> n;

    vector<int> strengths(n);

    for (int i = 0; i < n; ++i) {
        cin >> strengths[i];
    }

    // Sort the strengths in descending order
    sort(strengths.rbegin(), strengths.rend());

    int maxPokemons = 1; // At least one Pokemon can be taken

    // Check the gcd of the strengths and update the maximum number of Pokemon
    for (int i = 1; i < n; ++i) {
        int currentGCD = strengths[0];

        for (int j = i; j < n; ++j) {
            currentGCD = gcd(currentGCD, strengths[j]);

            if (currentGCD == 1) {
                break;
            }
        }

        if (currentGCD > 1) {
            maxPokemons = max(maxPokemons, i + 1);
        }
    }

    cout << maxPokemons << endl;

    return 0;
}
