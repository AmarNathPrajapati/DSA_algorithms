//Sort 01 
    // void sortZeroesAndOne(int *input, int size)
    // {
    //     //Write your code here
    //     //using concept of two pointer
        
    //     //s1: add a pointer to start and a pointer to end
    //     int i = 0;
    //     int j = size-1;
    //     while(i<j){
    //     //s2: if start pointer get 0 the move forward and end pointer get 1 then move backword
    //         if(input[i]==0){
    //             i++;
    //         }
    //         else if(input[j]==1){
    //             j--;
    //         }
    //     //s3: if start pointer get 1 and end pointer get 0 simultaneously the swap and change the positiion the pointer.
    //         else if(input[i]==1 && input[j]==0){
    //             swap(input[i],input[j]);
    //             i++;
    //             j--;
    //         }
    //     }
    // }

//find the first and the last position of the element in the sorted array
    // class Solution {
    // public:
    //     int leftMostPosition(vector<int>& nums, int target){
    //         //sorted array -- think approach with binary search
    //         int s = 0;
    //         int e = nums.size()-1;
    //         int ans=-1;
    //         //s1: to find left most element we will use binary search and if element found move left side(e = mid-1)
    //         while(s<=e){
    //             int mid = s + (e-s)/2;
    //             if(nums[mid]==target){
    //                 e = mid-1;
    //                 ans = mid;
    //             }else if(nums[mid]>target){
    //                 e = mid-1;
    //             }else if(nums[mid]<target){
    //                 s = mid + 1;
    //             }
    //         }
    //         return ans;
    //     }
    //     int rightMostPosition(vector<int>& nums, int target){
    //         //sorted array -- think approach with binary search
    //         int s = 0;
    //         int e = nums.size()-1;
    //         int ans=-1;
    //         //s2: to find right most element if element found move right side s = (mid + 1)
    //         while(s<=e){
    //             int mid = s + (e-s)/2;
    //             if(nums[mid]==target){
    //                 s = mid+1;
    //                 ans = mid;
    //             }else if(nums[mid]>target){
    //                 e = mid-1;
    //             }else if(nums[mid]<target){
    //                 s = mid + 1;
    //             }
    //         }
    //         return ans;
    //     }
    //     vector<int> searchRange(vector<int>& nums, int target) {
    //         //sorted array -- think approach with binary search
    //         vector<int> ans;
    //         ans.push_back(leftMostPosition(nums,target));
    //         ans.push_back(rightMostPosition(nums,target));
    //         //s3: and store ans as mid
    //         return ans;
    //     }
    // };
    
    