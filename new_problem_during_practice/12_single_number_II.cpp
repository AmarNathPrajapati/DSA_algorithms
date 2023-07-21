class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int size = nums.size();
        sort(nums.begin(),nums.end());
        for(int i = 0; i<size;i+=3){
            int count = 0;
            for(int j = i+1;j<size;j++){
                if(nums[i]==nums[j]){
                    count++;
                }else{
                    break;
                }
            }
            if(count!=2){
                return nums[i];
            }
        }
        return -1;
    }
};