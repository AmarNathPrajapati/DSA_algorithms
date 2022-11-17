class Solution {
private:
    void solve(vector<vector<int>>&ans,vector<int>output,vector<int>&nums,int i){
        //base condition
        if(i>=nums.size()){
            ans.push_back(output);
            return;
        }
        //exclude recursive call
        solve(ans,output,nums,i+1);
        //include recursive call
        int element = nums[i];
        output.push_back(element);
        solve(ans,output,nums,i+1);
}
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        int i = 0;
        solve(ans,output,nums,i);
        return ans;
    }
};