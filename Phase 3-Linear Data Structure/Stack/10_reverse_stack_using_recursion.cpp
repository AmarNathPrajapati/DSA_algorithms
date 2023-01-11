void insertAtBottom(stack<int>&st, int x){
    if(st.empty()){
        st.push(x);
        return;
    }
    int num = st.top();
    st.pop();
    //recursive call
    insertAtBottom(st,x);
    st.push(num);
}
void reverseStack(stack<int> &stack) {
    // Write your code here
    //base condition
    if(stack.empty()){
        return;
    }
    int num = stack.top();
    stack.pop();
    //recursive call
    reverseStack(stack);
    insertAtBottom(stack,num);
}