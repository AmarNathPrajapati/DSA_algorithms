// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
        int maxi = 0;
        int maxRange = 0;
        int ans = 0;
        for(int i = 0; i<n; i++){
            maxi = max(maxi,i+arr[i]);
            if(i==maxRange){
                maxRange = maxi;
                ans++;
            }
            if(maxRange>=n-1){
                return ans;
            }
        }
        return -1;
    }
};