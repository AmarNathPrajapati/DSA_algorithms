#include<bits/stdc++.h>
using namespace std;
void reverseStr(string &s, int i, int j){
    //base condition
    if(i>j){
        return ;
    }
    //processing
    swap(s[i],s[j]);
    i++;
    j--;
    //recurrence
    reverseStr(s,i,j);
}
int main(){
    string s;
    cout<<"Enter the string"<<endl;
    cin>>s;
    int i = 0;
    int j = s.length()-1;
    reverseStr(s,i,j);
    cout<<"String after reversed: "<<endl;
    cout<<s<<endl;
return 0;
}