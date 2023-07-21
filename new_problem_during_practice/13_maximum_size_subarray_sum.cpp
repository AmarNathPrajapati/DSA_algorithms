// class Solution {
// public:
//     int minSubArrayLen(int target, vector<int>& nums) {
//         int size  = nums.size();
//         vector<pair<int,int>>ans;//pair of sum and size
//         for(int i = 0; i<size; i++){
//             int sum = 0;
//             int length = 0;
//             int j = 0;
//             for(j = i; j<size;j++){
//                 sum = sum+nums[j];
//             }
//             length = j-i;
//             ans.push_back({sum,length});
//         }
//         int mini = INT_MAX;
//         bool found = false;
//         for(auto val: ans){
//             if(target==val.first){
//                 found = true;
//                 mini = min(mini,val.second);
//             }
//         }
//         if(found){
//             return mini;
//         }else{
//             return 0;
//         }
//     }
// };

// class Solution {
// public:
//       bool windowfind(int size, vector<int>&nums, int target) {
//         int sum = 0;
//         int i=0;
//         int j=0;
//         int mx=INT_MIN;
//         int n=nums.size();
//         while(j<n){
//             sum+=nums[j];
//             if(j-i+1==size){
//               mx=max(sum,mx);
//               sum-=nums[i];
//               i++;
//             }
//             j++;
//         }
//         if(mx>=target)
//         return true;
//         return false;
//     }

//     int minSubArrayLen(int target, vector<int>& nums) {
//         int low = 1, high = nums.size(), mn = 0;
//         while (low <= high) {
//             int mid = (low + high) / 2;
//             if (windowfind(mid, nums, target)) {
//                 high = mid-1;
//                 mn = mid;
//             } else low = mid + 1;
//         }
//         return mn;
//     }
// };

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0;
        int j=0;
        int sum=0;
        int mn=INT_MAX;
        while(j<nums.size()){
            sum+=nums[j];
            while(sum>=target){
                sum-=nums[i];
                mn=min(j-i+1,mn);
                i++;
            }
            j++;
        }
        if(mn==INT_MAX){
            return 0;
        }
        return mn;
    }
};
