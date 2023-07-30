class Solution {
public:
    bool check(int mid,vector<int>&dist,double hour)
    {
        double time=0;
        for(int i=0;i<dist.size()-1;i++)
        {
            double k=(double)dist[i]/mid;
            time= time + ceil(k);
        }
        time =time + (double)(dist[dist.size()-1])/mid;
        
        return time<=hour;
    }
    int minSpeedOnTime(vector<int>& dist, double hour) {
        int s=1;
        int e=10000000;
        int ans=-1;
        int mid = s + (e-s)/2;
        while(s<=e)
        {
            if(check(mid,dist,hour))
            {
                ans=mid;
                e=mid-1;
            }
            else
            {
                s=mid+1;
            }
            mid = s + (e-s)/2;
        }
        return ans;
    }
};