class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        for(auto val: nums){
            int i = abs(val);
            if(nums[i]<0){
                return i;
            }
            nums[i] = -nums[i];
        }
        return -1;
    }
};