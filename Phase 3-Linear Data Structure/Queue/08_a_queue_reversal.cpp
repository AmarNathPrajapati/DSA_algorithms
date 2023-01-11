queue<int> rev(queue<int> q)
{
    // add code here.
    stack<int> st;
    while(!q.empty()){
        int num = q.front();
        q.pop();
        st.push(num);
    }
    while(!st.empty()){
        int num = st.top();
        st.pop();
        q.push(num);
    }
    return q;
}