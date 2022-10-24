#include<bits/stdc++.h>
using namespace std;
void printArray(auto &v){
    for (auto &val : v)
    {
        cout << val << " ";
    }
    cout<<endl;
}
bool checkEqual(int a[] , int b[]){
    for (int i = 0; i < 26; i++)
    {
        if(a[i] != b[i]) {
            return 0;
        }
    }
    return 1;
}
int main(){
    cout<<"Enter  the string "<<endl;
    string s;
    getline(cin,s);
    cout<<"Enter another the string "<<endl;
    string s2;
    getline(cin,s2);

    int count1[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        int index = s[i] - 'a';
        count1[index]++;
    }
    // printArray(count1);

    int count2[26] = {0};
    for (int i = 0; i < s2.length() && i<s.length(); i++)
    {
        int index = s2[i] - 'a';
        count2[index]++;
    }
    // printArray(count2);
    if(checkEqual(count1,count2)){
        return 1;
    }
    for (int i = 0; i < s2.length(); i++)
    {
        char newChar = s2[i];
        int index = newChar - 'a';
        count2[index]++;

        char oldChar = s2[i-s.length()];
        int index = oldChar - 'a';
        count2[index]--;

        if(checkEqual(count1,count2)){
        return 1;
        }
    }
    
return 0;
}