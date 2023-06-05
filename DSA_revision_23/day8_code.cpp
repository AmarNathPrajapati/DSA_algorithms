//Array of n unique number which sum is zero for the given number of n.
    // class Solution {
    // public:
    //     vector<int> sumZero(int n) {
    //         int i = -n/2;
    //         vector<int>v;
    //         for(i; i<=n/2;i++){
    //             if(n%2==0 && i==0){
    //                 continue;
    //             }
    //             v.push_back(i);
    //         }
    //         return v;
    //     }
    // };

//find the number of prime number to n (time limit exceed)
    //class Solution {
    // public:
    //     bool checkPrime(int n){
    //         bool prime = true;
    //         for(int i = 2;i<=n/2;i++){
    //             if(n%i==0){
    //                 prime = false;
    //                 break;
    //             }
    //         }
    //         return prime;
    //     }
    //     int countPrimes(int n) {
    //         int countPrime = 0;
    //         for(int i = 2; i<n; i++){
    //             if(checkPrime(i)){
    //                 countPrime++;
    //             }
    //         }
    //         return countPrime;
    //     }
    // };

//find number of prime number by using table concept
    // class Solution {
    // public:
    //     int countPrimes(int n) {
    //         //using concept of further division
    //         vector<bool>v(n+1,true);
    //         int primeCount = 0;
    //         v[0] = v[1] = false;
    //         for(int i = 2; i<n; i++){
    //             if(v[i]){
    //                 primeCount++;
    //                 for(int j = i*2;j<n;j=j+i){
    //                     v[j]=false;
    //                 }
    //             }
    //         }
    //         return primeCount;
    //     }
    // };

//Intersection of the two sorted array
    // #include <bits/stdc++.h> 
    // vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
    // {
    // 	// Write your code here.
    // 	int i = 0, j=0;
    // 	vector<int>ans;
    // 	while(i<n && j<m){
    // 		if(arr1[i]==arr2[j]){
    // 			ans.push_back(arr1[i]);
    // 			i++;
    // 			j++;
    // 		}else if(arr1[i]<arr2[j]){
    // 			i++;
    // 		}else{
    // 			j++;
    // 		}
    // 	}
    // 	return ans;
    // }

//Pair Sum
    // class Solution {
    // public:
    //     vector<int> twoSum(vector<int>& nums, int target) {
    //         int n = nums.size();
    //         vector<int>v;
    //         for(int i=0;i<n;i++){
    //             for(int j= i+1;j<n;j++){
    //                 if(nums[i]+nums[j]==target){
    //                     v.push_back(i);
    //                     v.push_back(j);
    //                     break;
    //                 }
    //             }
    //         }
    //         return v;
    //     }
    // };

//three sum (but not accepted)
    // vector<vector<int>> threeSum(vector<int>& nums) {
    //     vector<vector<int>>ans;
    //     int n = nums.size();
    //     for(int i = 0; i<n; i++){
    //         for(int j = i+1; j<n; j++){
    //             for(int k = j+1;k<n;k++){
    //                 vector<int>temp;
    //                 if(nums[i]+nums[j]+nums[k]==0){
    //                     temp.push_back(nums[i]);
    //                     temp.push_back(nums[j]);
    //                     temp.push_back(nums[k]);
    //                     ans.push_back(temp);
    //                 }
    //             }
    //         }
    //     }
    //     return ans;
    // }