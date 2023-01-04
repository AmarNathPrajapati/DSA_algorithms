#include<iostream>
#include<stack>
#include<string>
using namespace std;
bool isValidParenthesis(string expression)
{
    // Write your code here.
    stack<char> st;
    for(int i = 0; i<expression.size(); i++){
        //use stack
        //get character
        char ch = expression[i];
        //if opening then push into stack
        if(ch=='(' || ch=='{' || ch=='['){
            st.push(ch);
        //if corresponding closing then pop
        }else{
            if(!st.empty()){
                char topElement = st.top();
                if(
                  (ch==')' && topElement=='(') ||
                  (ch=='}' && topElement=='{') ||
                  (ch==']' && topElement=='[')
                ){
                    st.pop();
                }else{
                    return false;
                }
            }else{
                return false;
            }
        }
        //if empty return true
    }
       if(st.empty()){
           return true;
       }else{
           return false;
       }
}
int main(){
    string s = "[{}]";
    cout<<"string: "<<s<<endl;
    if(isValidParenthesis(s)){
        cout<<"balanced"<<endl;
    }else{
        cout<<"Not balanced"<<endl;
    }
    
return 0;
}