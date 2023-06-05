bool isPossibleSol(vector<int> &stalls,int n, int k , int mid){
    int cowCount = 1;
    int lastPosition = stalls[0];
    for(int i = 0 ;i<n;i++){
        if(stalls[i]-lastPosition>=mid){
            cowCount++;
            if(cowCount==k){
                return true;
            }
            lastPosition = stalls[i];
        }
    }
    return false;
}
int aggressiveCows(vector<int> &stalls, int k)
{
    //    Write your code here.
    int s = 0;
    int n = stalls.size();
    sort(stalls.begin(),stalls.end());
    int maxi = -1;
    for(int i = 0; i<n; i++){
        maxi = max(maxi,stalls[i]);
    }
    int e = maxi;
    int ans = -1;
    while(s<=e){
        int mid = s+ (e-s)/2;
        if(isPossibleSol(stalls,n,k,mid)){
            s = mid+1;
            ans = mid;
        }else{
            e =mid-1;
        }
    }
    return  ans;
}