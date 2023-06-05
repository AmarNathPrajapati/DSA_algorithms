bool isPossibleSol(vector<int>& arr, int n, int m,int mid){
    int pageCount = 0;
    int studentCount = 1;
    for(int i = 0; i<n; i++){
        if(pageCount+arr[i]<=mid){
            pageCount +=arr[i];
        }else{
            studentCount++;
            if(studentCount>m|| arr[i]>mid){
                return false;
            }
            pageCount = arr[i];
        }
    }
    return true;
}

int findPages(vector<int>& arr, int n, int m) {
    // Write your code here.
    if(m>n){
        return -1;
    }
    int s = 0;
    int sum = 0;
    for(int i = 0; i< n; i++){
        sum +=arr[i];
    }
    int e = sum;
    int ans = -1;
    while(s<=e){
        int mid = s + (e-s)/2;
        if(isPossibleSol(arr,n,m,mid)){
            ans = mid;
            e = mid-1;
        }else{
            s = mid + 1;
        }
    }
    return ans;
}