queue<int> modifyQueue(queue<int> q, int k) {
    // add code here.
    // first push k element in the stack
    stack<int> st;
    int n = q.size();
    for(int i = 0; i<k; i++){
        int num = q.front();
        q.pop();
        st.push(num);
    }
    // the push element of stack in the stack
    while(!st.empty()){
        int num = st.top();
        st.pop();
        q.push(num);
    }
    // push rest element in the queue
    for(int i = 0; i<n-k; i++){
        int num = q.front();
        q.pop();
        q.push(num);
    }
    return q;

}