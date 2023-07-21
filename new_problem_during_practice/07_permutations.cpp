class Solution {
public:
    void solve(vector<vector<int>>&ans,vector<int>nums,int index){
        //base case
        if(index>=nums.size()){
            ans.push_back(nums);
            return;
        }
        //swap with each position 
        for(int j = index; j<nums.size();j++){
            //we will solve one case 
            swap(nums[index],nums[j]);
            solve(ans,nums,index+1);
            //we don't want to store the answer, using the concept of the backtracking
            swap(nums[index],nums[j]);

        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        //s1: create a ans vector of vector 
        vector<vector<int>>ans;
        int index = 0;
        solve(ans,nums,index);
        return ans;
    }
};