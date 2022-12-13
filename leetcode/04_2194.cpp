#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "k1:l2";
    vector<string> ans;
        int n1 = s[1]-'0';
        int n2 = s[4]-'0';
        char c1 = s[0];
        char c2 = s[3];
        for(int i = n1; i<=n2; i++){
            string result = c1 + to_string( i );
            ans.push_back(result);
            cout<<"in for loop"<<endl;
        }
        // for(int i = n1; i<=n2; i++){
        //     string newS;
        //     newS.push_back(c2);
        //     newS.push_back(to_string(i));
        //     ans.push_back(newS);
        // }
        // return ans;
return 0;
}