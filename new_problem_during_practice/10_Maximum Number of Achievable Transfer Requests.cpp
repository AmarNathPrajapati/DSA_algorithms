// class Solution {
// public:
//     int maximumRequests(int n, vector<vector<int>>& requests) {
//         vector<int>v1;
//         vector<int>v2;
//         int size = requests.size();
//         for(int i = 0; i<size; i++){
//             v1.push_back(requests[i][0]);
//             v2.push_back(requests[i][1]);
//         }
//         sort(v1.begin(),v1.end());
//         sort(v2.begin(),v2.end());
//         //count all the request from each buildings
//         vector<int>count1(n);
//         for(int i = 0; i<size;i++){
//             for(int j = 0; j<n; j++){
//                 if(v1[i]==j){
//                     count1[j]++;
//                 }
//             }
//         }
//         vector<int>count2(n);
//         for(int i = 0; i<size;i++){
//             for(int j = 0; j<n; j++){
//                 if(v2[i]==j){
//                     count2[j]++;
//                 }
//             }
//         }
//         int sum = 0;
//         for(int i  = 0; i<n; i++){
//             sum = sum + min(count1[i],count2[i]);
//         }
//         return sum;
//     }
// };





class Solution {
public:
    void backtrack(vector<vector<int>>& requests, int index, vector<int>& count, int currCount, int& maxCount) {
        // Base case: If all requests have been processed
        if (index == requests.size()) {
            // Check if all buildings have a balanced count
            for (int i = 0; i < count.size(); i++) {
                if (count[i] != 0) return; // Some building is unbalanced, return
            }
            // Update the maximum count if the current count is greater
            maxCount = max(maxCount, currCount);
            return;
        }

        // Process the current request
        int from = requests[index][0];
        int to = requests[index][1];
        count[from]--; // Decrease count of "from" building
        count[to]++;   // Increase count of "to" building

        // Recursively process the next request with the current count incremented
        backtrack(requests, index + 1, count, currCount + 1, maxCount);

        // Undo the previous changes (backtracking)
        count[from]++; // Undo count change for "from" building
        count[to]--;   // Undo count change for "to" building

        // Recursively process the next request with the current count
        backtrack(requests, index + 1, count, currCount, maxCount);
    }

    int maximumRequests(int n, vector<vector<int>>& requests) {
        vector<int> count(n); // Initialize count of buildings to 0
        int maxCount = 0;     // Maximum count of balanced requests
        backtrack(requests, 0, count, 0, maxCount); // Start backtracking from index 0
        return maxCount;     // Return the maximum count
    }
};

// using the bit manipulation methods
class Solution {
public:
    int maximumRequests(int n, vector<vector<int>>& r) {
        int mx=0;
        for(int i=0;i<(1<<r.size());i++){
            vector<int>a(n,0);
            int t=0;
            for(int j=0;j<r.size();j++){
                if(i & (1<<j)){
                    t++;
                    a[r[j][0]]--;
                    a[r[j][1]]++;
                }
            }
            bool f=true;
            for(int j=0;j<n;j++){
                if(a[j]!=0){
                    f=false;
                    break;
                }
            }
            if(f)mx=max(mx,t);
        }
        return mx;
    }
};
