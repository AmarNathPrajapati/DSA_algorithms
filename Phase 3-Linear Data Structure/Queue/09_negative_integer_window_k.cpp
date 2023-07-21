vector<long long> printFirstNegativeInteger(long long int A[],long long int N, long long int K) {
    deque<long long > dq;
    vector<long long> ans;
    long long int n = N;
    long long int k = K;
    //processing the first k size window.
    for(int i = 0 ; i<k; i++){
        if(A[i]<0){
            dq.push_back(i);//negative number ka index store karate hai.
        }
    }
    //store answer of first k size window.
    if(dq.size()>0){
        ans.push_back(A[dq.front()]);
    }else{
        ans.push_back(0);
    }
    //processing the remaining windows.
    for(int i=k; i<n; i++){
        //removal jo element es window me nahi aati hai, use remove kar do.
        if(!dq.empty() && (i-dq.front()>=k)){//eska matlab window se bahar ke hai.
            dq.pop_front();//jo chij dq me hai vo k size ke window me aati hai  ya nahi.
        }
        //addition(agar ith wali value negative hai to index store kar lo.)
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
 //ham index isiliye store kar rahe hai taki window ki size maintain rahe.