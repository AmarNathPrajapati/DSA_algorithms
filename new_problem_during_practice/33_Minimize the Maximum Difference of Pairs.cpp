class Solution {
public:
    bool isValid(vector<int>&nums, int mid, int p){
        //here we are checking that there should be at least p pairs which value <= mid
        int count_pairs = 0;
        //if pair found i+=2 otherwise increment by 1
        int i = 0;
        int n = nums.size();
        while(i<n-1){
            if(nums[i+1]-nums[i]<=mid){
                count_pairs++;
                i+=2;
            }else{
                i++;
            }
        }
        return count_pairs>=p;
    }
    int minimizeMax(vector<int>& nums, int p) {
        //applying binary search on the possibe answer
        sort(nums.begin(),nums.end());
        int size = nums.size();
        int s = 0;
        int e = nums[size-1]-nums[0];
        int result = INT_MAX;
        while(s<=e){
            int mid = s + (e-s)/2;
            if(isValid(nums,mid,p)){
                result = mid;//if mid is answer but we want to minimum.
                e = mid - 1;//hence e decrement to find as minimum as possible.
            }else{
                s = mid + 1;
            }
        }
        return result;
    }
};