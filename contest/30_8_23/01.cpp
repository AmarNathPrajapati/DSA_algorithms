#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
int fastGCD(int a, int b){
    int num = max(a,b);
    int den = min(a,b);
    int rem = num%den;
    while(rem != 0){
        num = den;
        den = rem;
        rem = num%den;
    }
    return den;
}
int main() {
	// Your code here
    return 0;
    int size;
    cin>>size;
    vector<int>nums;
    for(int i = 0; i<size; i++){
        int data;
        cin>>data;
        nums.push_back(data);
    }
    sort(nums.begin(),nums.end(),greater<int>());
    vector<int>ans;
    for(int i  = 1; i<size; i++){
        int gcd = nums[0];
        for(int j = i; j<size; j++){
            gcd = fastGCD(gcd,nums[j]);
        }
        ans.push_back(gcd);
    }
    sort(ans.begin(),ans.end(),greater<int>());
    for(auto val: ans){
        cout<<val<<" ";
    }
    return 0;
}
