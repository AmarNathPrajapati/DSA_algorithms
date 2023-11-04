#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cout<<"Enter the string: "<<endl;
    cin>>s;
    cout<<" String is : "<<s;
    cout<<endl;
    string ans = "India : ";
    string ans2 = "(+91 ";
    for(int i = 0; i<s.length(); i++){
        if(s[i]==')'){
            ans = ans+"Zero ";
            ans2.push_back('0');
        }
        else if(s[i]=='@'){
            ans = ans+"One ";
            ans2.push_back('1');
        }
        else if(s[i]=='#'){
            ans = ans+"Two ";
            ans2.push_back('2');
        }
        else if(s[i]=='$'){
            ans = ans+"Three ";
            ans2.push_back('3');
        }
        else if(s[i]=='*'){
            ans = ans+"Four ";
            ans2.push_back('4');
        }
        else if(s[i]=='&'){
            ans = ans+"Five ";
            ans2.push_back('5');
        }
        else if(s[i]=='^'){
            ans = ans+"Six ";
            ans2.push_back('6');
        }
        else if(s[i]=='!'){
            ans = ans+"Seven ";
            ans2.push_back('7');
        }
        else if(s[i]=='%'){
            ans = ans+"Eight ";
            ans2.push_back('8');
        }
        else if(s[i]=='('){
            ans = ans+"Nine ";
            ans2.push_back('9');
        }
        else if(s[i]=='0'){
            ans = ans+"Zero ";
            ans2.push_back('0');
        }
        else if(s[i]=='1'){
            ans = ans+"One ";
            ans2.push_back('1');
        }
        else if(s[i]=='2'){
            ans = ans+"Two ";
            ans2.push_back('2');
        }
        else if(s[i]=='3'){
            ans = ans+"Three ";
            ans2.push_back('3');
        }
        else if(s[i]=='4'){
            ans = ans+"Four ";
            ans2.push_back('4');
        }
        else if(s[i]=='5'){
            ans = ans+"Five ";
            ans2.push_back('5');
        }
        else if(s[i]=='6'){
            ans = ans+"Six ";
            ans2.push_back('6');
        }
        else if(s[i]=='7'){
            ans = ans+"Seven ";
            ans2.push_back('7');
        }
        else if(s[i]=='8'){
            ans = ans+"Eight ";
            ans2.push_back('8');
        }
        else if(s[i]=='9'){
            ans = ans+"Nine ";
            ans2.push_back('9');
        }
    }
    ans2.push_back(')');
    ans =ans + ans2;
    cout <<ans;
    return 0;
}
