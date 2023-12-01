#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> lights(n, vector<int>(m + 2));

    // Reading the building description
    for (int i = n - 1; i >= 0; --i) {
        for (int j = 0; j < m + 2; ++j) {
            cin >> lights[i][j];
        }
    }

    int totalTime = 0;

    // Iterate through each floor
    for (int i = 0; i < n; ++i) {
        // Find the first room with the light on
        int roomIndex = find(lights[i].begin() + 1, lights[i].end() - 1, 1) - lights[i].begin();

        // If there's a room with the light on, calculate the time to turn off lights
        if (roomIndex < m + 1) {
            totalTime += (roomIndex - 1) * 2;  // Move to the room from the stairs
            totalTime += min(i, n - i - 1) * 2;  // Move between floors using stairs
            totalTime += 1;  // Time to turn off the light
        }
    }

    cout << totalTime << endl;

    return 0;
}
