#include<bits/stdc++.h>
using namespace std;
int counts(string s, char c){
        int cnt = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i]==c){
                cnt++;
            }
        }
        return cnt;
    }
int main(){
    string s = "amarnath";
    int l = s.size();
    int n = count(s.begin(), s.end(),'a');
    cout<<"number of a appears are: "<<n<<endl;

    int arr[]={1,2,3,4,3,2,1,3,4,3,5,3};
    int size = sizeof(arr)/sizeof(int);
    cout<<"number of 3 appear in array are: "<<count(arr,arr+size,3)<<endl;
     cout<<"number of a appears are (my func): "<<counts(s,'a')<<endl;
return 0;
}