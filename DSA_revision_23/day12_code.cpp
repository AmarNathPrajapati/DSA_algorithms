//Merge two sorted array within an array
    // class Solution {
    // public:
    //     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    //         int i = m;
    //         int j = 0;
    //         while(i<m+n){
    //             nums1[i] = nums2[j];
    //             i++;
    //             j++;
    //             // cout<<nums1[i]<<endl;
    //         }
    //         sort(nums1.begin(),nums1.end());
    //     }
    // };

// rotate the k element in left direction
    // #include <bits/stdc++.h> 
    // #include <iostream>
    // using namespace std;
    //     void rotateLeft(vector<int>&arr,int size,int k){
    //         vector<int>temp(size);
    //         for(int i = 0; i<size; i++){
    //             if(i>=k){
    //                 temp[(i-k)%size]=arr[i];
    //             }else{
    //                 temp[((i-k)%size)+size]=arr[i];
    //             }
    //         }
    //         for(int val: temp){
    //             cout<<val<<" ";
    //         }
            
    //     }
    // int main() {
    //     //Write your code here
    //     int size;
    //     cin>>size;
    //     vector<int>arr;
    //     for(int i = 0; i<size; i++){
    //         int n;
    //         cin>>n;
    //         arr.push_back(n);
    //     }
    //     int k;
    //     cin>>k;
    //     rotateLeft(arr,size,k);
    //     return 0;
    // }
    
//sum of the array
//simple additon method
        //convert array into number
        // vector<int>ans;
        // int size = num.size();
        //  sum = 0;
        // for(int i =0;i<size; i++){
        //     sum = sum*10+num[i];
        // }
        // sum = sum + k;
        // while(sum){
        //     int digit = sum%10;
        //     ans.push_back(digit);
        //     sum = sum/10;
        // }
        // reverse(ans.begin(),ans.end());
        // return ans;

//array method
    //     class Solution {
    // public:
    //     vector<int> addToArrayForm(vector<int>& num, int k) {
    //         //Array method
    //         //convert number into array
    //         vector<int>arr;
    //         vector<int>ans;
    //         int size = num.size();
            
    //         while(k){
    //             int digit = k%10;
    //             arr.push_back(digit);
    //             k = k/10;
    //         }
    //         reverse(arr.begin(),arr.end());
    //         //we will put two pointer end of vector
    //         int i = num.size()-1;
    //         int j = arr.size()-1;
    //         //there are three case
    //         //case1:
    //         int carry = 0;
    //         int sum = 0;
    //         while(i>=0 && j>=0){
    //             sum = num[i] + arr[j] + carry;
    //             carry = sum/10;
    //             sum = sum%10;
    //             ans.push_back(sum);
    //             i--;
    //             j--;
    //         }
    //         //case2: if num have greater size than arr
    //         while(i>=0){
    //             sum = num[i] + carry;
    //             carry = sum/10;
    //             sum = sum%10;
    //             ans.push_back(sum);
    //             i--;
    //         }
    //         //case3: if arr have greater size than num
    //         while(j>=0){
    //             sum = arr[j] + carry;
    //             carry = sum/10;
    //             sum = sum%10;
    //             ans.push_back(sum);
    //             j--;
    //         }
    //         if(carry!=0){
    //             sum = carry;
    //             ans.push_back(sum);
    //         }
    //         reverse(ans.begin(),ans.end());
    //         return ans;
    //     }
    // };