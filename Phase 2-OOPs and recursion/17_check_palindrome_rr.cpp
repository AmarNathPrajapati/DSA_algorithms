//using two pointer and recurrence 
#include<iostream>
using namespace std;
bool checkPalindrome(string &s, int i , int j){
    //base condition
    if(i>j){
        return true;
    }
    //processing
    if(s[i] != s[j]){
        return false;
    }
    i++;
    j--;
    //recurrence relation
    return checkPalindrome(s,i,j);
}
int main(){
    string s;
    cout<<"Enter the string"<<endl;
    cin>>s;
    int i = 0;
    int j = s.length()-1;
    if(checkPalindrome(s,i,j)){
        cout<<"Palindrome"<<endl;
    }else{
        cout<<"Not a palindrome"<<endl;
    }
return 0;
}