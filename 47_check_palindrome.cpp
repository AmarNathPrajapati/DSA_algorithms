#include<bits/stdc++.h>
using namespace std;
int lengthString(char name[]){
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
bool palindrome(char str[],int length){
    int i = 0;
    int j = length-1;
    while (i<=j)
    {
        if(str[i]!=str[j]){
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}
int main(){
    cout<<"Enter the string"<<endl;
    char str[20];
    cin>>str;
    int length = lengthString(str);
    if(palindrome(str,length)){
        cout<<"String is palindrome"<<endl;
    }else{
        cout<<"String is not a palindrome"<<endl;
    }
return 0;
}