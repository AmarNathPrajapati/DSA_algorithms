class Solution {
public:
    long long int isWinner(vector<int>&nums,int i, int j, int chance){
        //base case
        if(i>j){
            return 0;
        }
        if(chance == 0){
            return max(nums[i]+isWinner(nums,i+1,j,1),nums[j]+isWinner(nums,i,j-1,1));
        }else{
            return min(isWinner(nums,i+1,j,0),isWinner(nums,i,j-1,0));
        }
    }
    bool PredictTheWinner(vector<int>& nums) {
        //find the total score
        long long int sum2 = 0;
        int size = nums.size();
        for(int i = 0; i<size; i++){
            sum2 += nums[i];
        }
        long long int sum1 = isWinner(nums,0,size-1,0);
        sum2 -= sum1;
        return (sum1>=sum2);
    }
};



// class Solution {
// public:
//     bool PredictTheWinner(vector<int>& nums) {
//         int size = nums.size();
//         int sum1 = 0;
//         int sum2 = 0;
//         //Note: player 1 always start
//         //case1: alternate sum from begining
//         for(int i = 0; i<size ; i+=2){
//             sum1 = sum1 + nums[i];
//         }
//         for(int i = 1; i<size ; i+=2){
//             sum2 = sum2 + nums[i];
//         }
//         bool check1=(sum1>=sum2);
//         sum1 = 0;
//         sum2 = 0;
//         //case2: alternate sum from end
//         for(int i = size-1; i>=0 ; i-=2){
//             sum1 = sum1 + nums[i];
//         }
//         for(int i = size-2; i>=0 ; i-=2){
//             sum2 = sum2 + nums[i];
//         }
//         bool check2=(sum1>=sum2);
//         //if any case player 1 win then return true
//         if(check1 || check2){
//             return true;
//         }else{
//             return false;
//         }
//     }
//};