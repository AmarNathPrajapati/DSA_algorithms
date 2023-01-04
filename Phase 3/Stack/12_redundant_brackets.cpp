bool findRedundantBrackets(string &s)
{
    // Write your code here.
    stack<char> st;
    for(int i = 0; i<s.size(); i++){
        char ch = s[i];
        if(ch=='(' || ch=='+' ||ch=='-' ||ch=='*' ||ch=='/'){
            st.push(ch);
        }else{
            //ignoring lower letters
            if(ch==')'){
                bool ans = true;
                while(st.top() != '('){
                    char topChar = st.top();
                    if(topChar=='+' ||topChar=='-' ||topChar=='*' ||topChar=='/'){
                        ans = false;
                    }
                    st.pop();//pop operator
                }
                if(ans==true){
                    return true;
                }
                st.pop();//pop top match bracket
            }
        }
    }
    return false;
}