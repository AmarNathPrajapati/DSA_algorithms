// find the minimum element in the sorted roated array
    // class Solution {
    // public:
    //     int findMin(vector<int>& nums) {
    //         //s1: if mid element greater that 0th element then we have to increment s other wise decrement the e
    //         int s = 0;
    //         int e = nums.size()-1;
    //         if(nums.size()==1){
    //             return nums[0];
    //         }
    //         while(s<e){
    //             int mid = s + (e-s)/2;
    //             if(nums[mid]>=nums[0]){
    //                 s = mid + 1;
    //             }else{
    //                 e = mid;
    //             }
    //         }
    //         if(e==nums.size()-1 && nums[0]<nums[s]){
    //             return nums[0];
    //         }
    //         return nums[s];
    //     }
    // };

//Search In the Sorted Roated Array using the concept of the pivot and binary search.
    // class Solution {
    // public:
    //     int binarySearch(int s, int e, int target,vector<int>&nums){
    //         while(s<=e){
    //             int mid = s + (e-s)/2;
    //             if(nums[mid]==target){
    //                 return mid;
    //             }else if(nums[mid]>target){
    //                 e = mid-1;
    //             }else{
    //                 s = mid+1;
    //             }
    //         }
    //         //s3: if exist return index otherwise return -1
    //         return -1;
    //     }
    //     int findPivotIndex(vector<int>&nums){
    //         int s = 0;
    //         int e = nums.size()-1;
    //         if(nums.size()==1){
    //             return 0;
    //         }
    //         while(s<e){
    //             int mid = s + (e-s)/2;
    //             if(nums[mid]>=nums[0]){
    //                 s = mid + 1;
    //             }else{
    //                 e = mid;
    //             }
    //         }
    //         return s;
    //     }

    //     int search(vector<int>& nums, int target) {
            
    //         int size = nums.size();
    //         if(size==1){
    //             if(nums[0]==target){
    //                 return 0;
    //             }else{
    //                 return -1;
    //             }
    //         }
    //         int s = 0;
    //         int e = size-1;
    //         int pivotIndex = findPivotIndex(nums);
    //         if(target>=nums[pivotIndex] && target<= nums[size-1]){
    //             s = pivotIndex;
    //             e = size-1;
    //             int index = binarySearch(s,e,target,nums);
    //             return index;
    //         }else{
    //             s = 0;
    //             e = pivotIndex-1;
    //             int index = binarySearch(s,e,target,nums);
    //             return index;
    //         }
    //     }
    // };

// find the greatest common divisor in the array
    // class Solution {
    // public:
    // int gcdNum(int a, int b){
    //     if(a==0){
    //         return b;
    //     }
    //     if(b==0){
    //         return a;
    //     }
    //     while (a!=b)
    //     {
    //         if(a>b){
    //             a=a-b;
    //         }else{
    //             b=b-a;
    //         }
    //     }
    //     return a;
    // }
    //     int findGCD(vector<int>& nums) {
    //         int size = nums.size();
    //         sort(nums.begin(),nums.end());
    //         int ans = gcdNum(nums[0],nums[size-1]);
    //         return ans;
    //     }
    // };