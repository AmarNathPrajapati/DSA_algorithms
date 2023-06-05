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