class Solution {
public:
    long long maxRunTime(int n, vector<int>& batteries) {
        //finding the maximum time to run
        long long int sum = 0;
        for(int i = 0; i<batteries.size(); i++){
            sum = sum + batteries[i];
        }
        long long int e = sum/n+1;
        //finding the minimum time to run
        sort(batteries.begin(),batteries.end());
        int size = batteries.size();
        long long int s = batteries[size-n];
        long long int ans = 0;
        //applying binary search 
        while(s<e){
            long long int mid = s + (e-s)/2;
            int k = size-1;
            //is battery can directly run till mid time (check in reverese direction)
            while(k>=0 && batteries[k]>=mid){
                k--;
            }
            //remaining computer that can't be run till mid time by using single battery
            int remain = n - (size-1-k);//k updated
            //is we battery to run remaing computer for mid time
            //finding sum of remaining battery
            long long int temp = 0;
            while(k>=0){
                temp = temp + batteries[k];
                k--;
            }
            if(remain<= 0 || temp>=remain*mid){
                ans = max(ans,mid);
                s = mid + 1;
            }else{
                e = mid;
            }
        }
        return ans;
    }
};