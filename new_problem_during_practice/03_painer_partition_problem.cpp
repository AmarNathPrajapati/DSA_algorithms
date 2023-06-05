bool isPossibleSol(vector<int>&boards,int n, int k, int mid){
    int area = 0;
    int painterCount = 1;
    for(int i = 0; i<n; i++){
        if(area + boards[i] <= mid){
            area += boards[i];
        }else{
            painterCount++;
            if(painterCount > k || boards[i] > mid){
                return false;
            }
            area = boards[i];
        }
    }
    return true;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    //    Write your code here.
    int n = boards.size();
    int s = 0;
    int sum = 0;
    for(int i = 0; i<n; i++){
        sum += boards[i];
    }
    int e = sum;
    int ans = -1;
    while(s<=e){
        int mid = s + (e-s)/2;
    // if solution exist we move the end pointer to mid - 1 the the value greater than mid can also be number but we want the minimum number.
        if(isPossibleSol(boards,n,k,mid)){
            ans = mid;
            e = mid-1;
    // if mid is not answer then we move s = mid + 1 because if mid is not answer then the number less than mid can't be answer.
        }else{
            s = mid+1;
        }
    }
    return ans;

}