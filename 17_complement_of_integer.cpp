#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    if(n==0){
        cout<<1;
    }
    int temp = n;
    int mask = 0;
    while(n != 0){
        cout<<"count"<<endl;
        int bit = n&1;
        mask = mask|1;
        mask = mask<<1;
        n=n>>1;
    }
    int newMask = mask>>1;
    int ans = (~temp)&newMask;
    cout<<ans;
return 0;
}