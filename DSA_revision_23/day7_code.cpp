//1: find duplicate if number is given in range of 1 to n of array size n+1
    // class Solution {
    // public:
    //     int findDuplicate(vector<int>& nums) {
    //         int size = nums.size();
    //         //s1: find array sum
    //         int arrSum = 0;
    //         for(int i = 0; i<size; i++){
    //             arrSum += nums[i];
    //         }
    //         //s2: find sum using the formula
    //         int sum = size*(size-1)/2;
    //         //s3: find the unique number by subtraction
    //         int repeatedNum = arrSum-sum;
    //         return repeatedNum;
    //     }
    // };


//2. Binary Search
    //     int search(vector<int>& nums, int target) {
    //     // Write Your Code Here
    //     int s = 0;
    //     int e = nums.size()-1;
    //     //s1: find mid 
    //     //s2: write condition
    //     while(s<=e){
    //         int mid = s + (e-s)/2;
    //         if(nums[mid]==target){
    //             return mid;
    //         }else if(nums[mid]>target){
    //             e = mid-1;
    //         }else{
    //             s = mid+1;
    //         }
    //     }
    //     //s3: if exist return index otherwise return -1
    //     return -1;
    // }

// Selection Sort
    // #include <bits/stdc++.h> 
    // void selectionSort(vector<int>& arr, int n)
    // {   
    //     // Write your code here.
    //     //s1: number of passes n-1
    //     for(int i = 0; i<n-1; i++){
    //         int minIndex = i;
    //     //s2: in each pass find minimum element and put it right place
    //         for(int j = i+1; j<n;j++){
    //             if(arr[minIndex]>arr[j]){
    //                 minIndex = j;
    //             }
    //         }
    //     //s3: swap minimum element to its right position
    //         swap(arr[minIndex],arr[i]);
    //     }
    // }

// Bubble Sort
    // #include <bits/stdc++.h> 
    // void bubbleSort(vector<int>& arr, int n)
    // {   
    //     // Write your code here.
    //     //s1: total n-1 passes required
    //     //s2: int each pass adjacent will compared and swapped
    //     //s3: optimized the code
    //     int swapCount = 0;
    //     for(int i = 0; i<n-1; i++){
    //         for(int j = 0; j<n-1; j++){
    //             if(arr[j]>arr[j+1]){
    //                 swap(arr[j],arr[j+1]);
    //                 swapCount++;
    //             }
    //         }
    //             if(swapCount==0){
    //                 break;
    //             }
    //     }
    // }
