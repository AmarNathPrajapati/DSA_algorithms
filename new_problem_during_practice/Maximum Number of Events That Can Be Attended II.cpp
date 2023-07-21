class Solution {
public:

int BS(int index,vector<vector<int>>&events,int value)
{
    int lo = index;
    int hi = events.size()-1;
    int req = -1;
    while(hi>=lo)
    {
      int mid = lo+(hi-lo)/2;
      if(events[mid][0] > value)
      {
        req = mid;
        hi = mid-1;
      }
      else lo = mid+1;
    }
    return req;
}

int solve(int i,vector<vector<int>>&events,int k, vector<vector<int>>&dp)
{
  if(i >= events.size() || k == 0 || i == -1){
    return 0;
  } 
      
  if(dp[i][k] != -1){
    return dp[i][k];
  } 

  int index = BS(i+1,events,events[i][1]);
  int c1 = events[i][2] + solve(index,events,k-1,dp);
  int c2 = solve(i+1,events,k,dp);

  return dp[i][k] = max(c1,c2);
}


 int maxValue(vector<vector<int>>& events, int k){

    sort(events.begin(),events.end());
    int n = events.size();
    vector<vector<int>>dp(n+5,vector<int>(k+1,-1));
    return solve(0,events,k,dp);
  }
};
// class Solution {
// public:
//     static bool cmp(vector<int>&a, vector<int>&b){
//         return a[2]>b[2];
//     }
//     int maxValue(vector<vector<int>>& events, int k) {
//         //using the greedy approach
//         int n = events.size();
//         sort(events.begin(),events.end(),cmp);
//         int endTime = events[0][1];
//         int value = events[0][2];
//         for(int i = 1; i<n; i++){
//             if(events[i][0]>endTime){
//                 k--;
//                 value = value + events[i][2];
//                 endTime = events[i][1];
//             }
//             if(k==0){
//                 break;
//             }
//         }
//         return value;
//     }
// };
