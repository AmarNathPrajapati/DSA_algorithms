vector<long long> printFirstNegativeInteger(long long int A[],long long int N, long long int K) {
    deque<long long > dq;
    vector<long long> ans;
    long long int n = N;
    long long int k = K;
    for(int i = 0 ; i<k; i++){
        if(A[i]<0){
            dq.push_back(i);
        }
    }
    if(dq.size()>0){
        ans.push_back(A[dq.front()]);
    }else{
        ans.push_back(0);
    }
    for(int i=k; i<n; i++){
        //removal
        if(!dq.empty() && (i-dq.front()>=k)){
            dq.pop_front();
        }
        //addition
        if(A[i]<0){
            dq.push_back(i);
        }
        if(dq.size()>0){
        ans.push_back(A[dq.front()]);
        }else{
        ans.push_back(0);
     }
    }
    return ans;
 }