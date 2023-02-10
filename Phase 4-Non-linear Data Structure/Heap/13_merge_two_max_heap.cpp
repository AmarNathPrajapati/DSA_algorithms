//{ Driver Code Starts
// Initial Template for C++

// C++ program to merge two max heaps.

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
    public:
    //s1: conmbine both vector
    vector<int> mergeVector(vector<int> &a, vector<int> &b){
        vector<int>ans = a;
        for(int i = 0; i<b.size();i++){
            ans.push_back(b[i]);
        }
        return ans;
    }
    void heapify(vector<int>&v,int size, int i){
        int largest = i;
        int left = 2*i+1;
        int right = 2*i+2;
        if(left<size && v[largest]<v[left]){
            largest = left;
        }
        if(right<size && v[largest]<v[right]){
            largest = right;
        }
        if(largest != i){
            swap(v[largest],v[i]);
            heapify(v,size,largest);
        }
    }
    vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
        // your code here
        //s1
        vector<int> v3 = mergeVector(a,b);
        //s2: apply heapify algorithm
        int size = n+m;
        for(int i = size/2-1; i>=0; i-- ){
            heapify(v3,size,i);
        }
        return v3;
    }
};

//{ Driver Code Starts.

bool isMerged(vector<int> &arr1, vector<int> &arr2, vector<int> &merged){
    if (arr1.size() + arr2.size() != merged.size()){
        return false;
    }
    arr1.insert(arr1.end(),arr2.begin(),arr2.end());
    sort(arr1.begin(),arr1.end());
    vector<int> mergedCopy =merged;
    sort(mergedCopy.begin(),mergedCopy.end());
    if (arr1 != mergedCopy){
        return false;
    }
    for(int i = 1; i<merged.size(); i++){
        if(merged[i] > merged[(i-1)/2])
            return false;
    }
    return true;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, i;
        cin >> n >> m;
        vector<int> a(n,0),b(m,0);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (i = 0; i < m; i++) {
            cin >> b[i];
        }
        vector<int> merged, copyA = a, copyB = b;
        Solution obj;
        merged = obj.mergeHeaps(a, b, n, m);
        bool flag = isMerged(copyA, copyB, merged);
        if(flag == false) cout<<0<<endl;
        else cout<<1<<endl;
    }
    return 0;
}

// } Driver Code Ends