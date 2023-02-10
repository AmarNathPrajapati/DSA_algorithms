#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
void solve(int n, int l, int s){
    bool ans  = false;
    for(int i = 1; i<=n ; i++){
        int sum = 0;
        int j = 1;
        int length = l;
        while(length !=0 && j<=n){
            j++;
            if(j==i){
                continue;
            }
            sum+=j;
            length--;
        }
        if(sum==s){
            ans = true;
            break;
        }
    }
    if(ans){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
int main() {
	// Your code here
    int testCases;
    cin>>testCases;
    for(int i = 0; i<testCases; i++){
        int n,l,s;
        cin>>n>>l>>s;
        solve(n,l,s);
    }
    return 0;
}
