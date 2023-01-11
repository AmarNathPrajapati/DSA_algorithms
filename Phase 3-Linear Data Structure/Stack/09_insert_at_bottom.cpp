void solve(stack<int> &st, int x){
    //base case
    if(st.empty()){
        st.push(x);
        return;
    }
    int num = st.top();
    st.pop();
    //recursive call
    solve(st,x);
    st.push(num);
}
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    // Write your code here.
    solve(myStack,x);
    return myStack;
}