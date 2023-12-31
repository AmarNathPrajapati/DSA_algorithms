class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        //find the value which has to be swapped
        int value_index = -1;
        int n = nums.size();
        for(int i = n-1; i>=1; i--){
            if(nums[i-1]<nums[i]){
                value_index = i-1;
                break;
            }
        }
        //find tha index where to swap
        if(value_index != -1){
            for(int i = n-1; i>value_index; i--){
                if(nums[i]>nums[value_index]){
                    swap(nums[i],nums[value_index]);
                    break;
                }
            }
        }
        reverse(nums.begin()+value_index+1,nums.end());
    }
};