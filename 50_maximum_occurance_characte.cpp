#include<bits/stdc++.h>
using namespace std;
char maxOccuranceCharacter(string s){
// create an array for a to z
    int arr[26] = {0};// initially all are zero;
    int index;
    for (int i = 0; i < s.length(); i++)
    {
        index = s[i]-'a';//getting index number
// increment that particular index of character
        arr[index]++;
    }
    /*
    debugging
    for (int i = 0; i < 26; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    */
    int ans = -1, ansIndex = -1;
    for (int i = 0; i < 26; i++)
    {
// find maximum index of array
        if(arr[i]>ans){
            ansIndex = i;
            ans = arr[i];
        }
       
    }
// return maximum + 'a'
    return ('a' + ansIndex);
    
}
int main(){
    cout<<"Enter the string"<<endl;
    string s;
    cin>>s;
    cout<<"Maximum occuring character is "<<maxOccuranceCharacter(s)<<endl;
return 0;
}