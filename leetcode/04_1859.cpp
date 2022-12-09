#include<bits/stdc++.h>
using namespace std;
string sortSentence(string s) {
    // cout<<"s: "<<s<<endl;
        vector<string> v;
        //storing all string
        string s1;
        for(int i = 0; i<=s.length(); i++){
            char c = s[i];
            s1.push_back(c);
            if(s[i]==' '){
                s1.pop_back();
                // cout<<"s1: "<<s1<<endl;
                v.push_back(s1);
                s1="";
            }
            if(i==s.length()){
                s1.pop_back();
                // cout<<"s1: "<<s1<<endl;
                v.push_back(s1);
                s1="";
            }
        }
        //printing v
        cout<<"printing v"<<endl;
        for(string &val : v){
            cout<<val<<endl;
        }
        //detecting number
        vector<string> v2(10);
        for(int i = 0; i<v.size(); i++){
            if(v[i][v[i].length()-1]=='1'){
                v2[1]=v[i];
            }
            else if(v[i][v[i].length()-1]=='2'){
                v2[2]=v[i];
            }
            else if(v[i][v[i].length()-1]=='3'){
                v2[3]=v[i];
            }
            else if(v[i][v[i].length()-1]=='4'){
                v2[4]=v[i];
            }
            else if(v[i][v[i].length()-1]=='5'){
                v2[5]=v[i];
            }
            else if(v[i][v[i].length()-1]=='6'){
                v2[5]=v[i];
            }
            else if(v[i][v[i].length()-1]=='7'){
                v2[7]=v[i];
            }
            else if(v[i][v[i].length()-1]=='8'){
                v2[8]=v[i];
            }
            else if(v[i][v[i].length()-1]=='9'){
                v2[9]=v[i];
            }
        }
        //printing v2
        cout<<"printing v2"<<endl;
        for(string &val : v2){
            cout<<"v2_val: "<<val<<endl;
        }
        string ans;
        for(int i = 0; i<v2.size(); i++){
            for(int j = 0; j<v2[i].length()-1 && v2[i]!="";j++){
                ans.push_back(v2[i][j]);
            }
            ans.push_back(' ');
        }
        return ans;
    }
int main(){
    string s = "is2 sentence4 This1 a3";

    string ans = sortSentence(s);
    cout<<"ans: "<<ans;
return 0;
}