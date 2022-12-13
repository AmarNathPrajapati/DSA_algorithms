#include <bits/stdc++.h> 
#include <iostream>
#include<algorithm>

using namespace std;

void kthSmallestLargest(int arr[], int n, int k) {
    //sorting the array
    sort(arr,arr+n);
    //print the kth largest and smallest
    cout<<arr[n-k]<<" "<<arr[k-1]<<endl;
}

int main() {
    int t;
    cin >> t;

    while (t > 0) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        kthSmallestLargest(arr, n, k);
        t--;
    }
    return 0;
}