//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n) {
        // Your code here
        //s1: create a min_heap and push all element in the heap.
        priority_queue<long long, vector<long long>, greater<long long>> pq;
        for(long long int i  = 0; i<n; i++){
            pq.push(arr[i]);
        }
        //s2: pop two element sum and calculate cost
        long long int cost = 0;
        while(pq.size()>1){
            long long int a = pq.top();
            pq.pop();
            long long int b = pq.top();
            pq.pop();
            long long int sum = a+b;
            cost +=sum;
            pq.push(sum);
        }
        return cost;
        
    }
};


//{ Driver Code Starts.

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long i, a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        cout << ob.minCost(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends