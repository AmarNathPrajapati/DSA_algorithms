class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int>dq;
        vector<int>ans;
        for(int i = 0; i<nums.size(); i++){
            //step 1: check window size
            while(!dq.empty() && dq.front()<=i-k){
                dq.pop_front();
            }
            //step 2: if any greater element comes pop_back small element
            while(!dq.empty() && nums[i]>nums[dq.back()])
                dq.pop_back();//front par greatest element put karane ke liye.
            //step 3: push index in dequeue
            dq.push_back(i);
            //step 4: if (i>=k-1) then store the answer.
            if(i>=k-1){
                ans.push_back(nums[dq.front()]);
            }
        }
        return ans;
    }
};