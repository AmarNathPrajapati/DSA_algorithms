#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main(){
    string s = "chandan";
    cout<<"string: "<<s<<endl;
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        st.push(ch);
    }
    cout<<"reversing the string....."<<endl;
    string ans = "";
    for (int i = 0; i < s.length(); i++)
    {
        char ch = st.top();
        ans.push_back(ch);
        st.pop();
    }
    cout<<"ans: "<<ans<<endl;
    
return 0;
}