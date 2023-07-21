//check the string a palindrome or not (a normal string with no space and special charcter)
    // #include<bits/stdc++.h>
    // using namespace std;
    // bool checkPalindrome(string &s){
    //     int len = s.length();
    //     int i = 0;
    //     int j = len-1;
    //     while(i<=j){
    //         if(s[i] != s[j]){
    //             return false;
    //         }else{
    //             i++;
    //             j--;
    //         }
    //     }
    //     return true;

    // }
    // int main(){
    //     //check palindrome
    //     string  s;
    //     getline(cin,s);
    //     if(checkPalindrome(s)){
    //         cout<<"This is the palidrome"<<endl;
    //     }else{
    //         cout<<"Not a palindrome"<<endl;
    //     }
    // return 0;
    // }

//check a special string with space and special character like abb a, a?ba, a?()ba
    // #include <bits/stdc++.h> 
    // using namespace std;
    // char convertLowercase(char ch)
    // {
    //     if (ch >= 'a' && ch <= 'z')
    //     {
    //         return ch;
    //     }
    //     else
    //     {
    //         return ch - 'A' + 'a';
    //     }
    // }
    // bool checkPalindrome(string s)
    // {
    //     int i = 0;
    //     int j = s.length() - 1;
    //     while (i <= j)
    //     {
    //         if (
    //             ((s[i]>='a' && s[i]<='z')||(s[i]>='A' && s[i]<='Z')||(s[i]>='0' && s[i]<='9'))
    //             &&((s[j]>='a' && s[j]<='z')||(s[j]>='A' && s[j]<='Z')||(s[j]>='0' && s[j]<='9'))
    //             )
    //         {
    //             if(s[i] != s[j]){
    //                 return false;
    //             }else{
    //                 i++;
    //                 j--;
    //             }
    //         }else{
    //             if(
    //                 !((s[i]>='a' && s[i]<='z')||(s[i]>='A' && s[i]<='Z')||(s[i]>='0' && s[i]<='9'))
    //             ){
    //                 i++;
    //             }
    //             if(
    //                 !((s[j]>='a' && s[j]<='z')||(s[j]>='A' && s[j]<='Z')||(s[j]>='0' && s[j]<='9'))
    //             ){
    //                 j--;
    //             }
    //         }
    //     }
    //     return true;
    // }
    // int main()
    // {
    //     cout << "Enter the string" << endl;
    //     string str;
    //     cin >> str;
    //     if (checkPalindrome(str))
    //     {
    //         cout << "String is palindrome" << endl;
    //     }
    //     else
    //     {
    //         cout << "String is not a palindrome" << endl;
    //     }
    //     return 0;
    // }

//create a valid palindorme by removing space and special character and check the string is palindrome or not
    // #include <bits/stdc++.h> 
    // //convert to lowercase
    // char convertToLower(char ch){
    //     if(ch>='a' && ch<='z'){
    //         return ch;
    //     }else{
    //         return ch-'A'+'a';
    //     }
    // }
    // //remove space and special character
    // string convertTonew(string &s){
    //     string newStr;
    //     int i =0;
    //     while(i<s.length()){
    //         if(((s[i]>='a' && s[i]<='z')||(s[i]>='A' && s[i]<='Z')||(s[i]>='0' && s[i]<='9'))){
    //             if((s[i]>='a' && s[i]<='z')||(s[i]>='A' && s[i]<='Z')){
    //                 newStr.push_back(convertToLower(s[i]));
    //             }else{
    //                 newStr.push_back(s[i]);
    //             }
    //             i++;
    //         }else{
    //             i++;
    //         }
    //     }
    //     return newStr;
    // }
    // bool checkValidPalindrome(string s){
    //     int i =0;
    //     int j = s.length()-1;
    //     while(i<=j){
    //         if((s[i]) != (s[j])){
    //             return false;
    //         }
    //         i++;
    //         j--;
    //     }
    //     return true;
    // }
    // bool checkPalindrome(string s)
    // {
    //     // Write your code here.
    //     //s1: remove the special charcter and create a new string.
    //     string newStr = convertTonew(s);
    //     //s2: check palindrome
    //     return checkValidPalindrome(newStr);
    // }

//find the size of the char arr and find the maximum occurrence of string in lexigrophical order.
// #include<iostream>
// using namespace std;

// int main(){
//     char input[10];
//     cin>>input;
//     // cout<<(sizeof(ans)/sizeof(*ans))<<endl;
//     // cout<<sizeof(*ans)<<endl;
//     int i =0;
//     int length = 0;
//     while(input[i] != '\0'){
//         i++;
//         length++;
//     }
//     int arr[26] = {0};
//     for(int i = 0; i<length; i++){//the last one is null charcter.
//         int index = input[i]-'a';
//         arr[index]++;
//     }
//     //find the maximum value and its index
//     int ansIndex = -1;
//     int ans = -1;
//     for(int i = 0 ; i<26; i++){
//         if(arr[i]>ans){
//             ans = arr[i];
//             ansIndex = i;
//         }
//     }
//     char answer = ('a'+ansIndex);
//     cout<<answer;
// return 0;
// }