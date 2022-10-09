#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int ans = 0;
    while (n!=0)
    {
        int digit = n%10;
        if(ans>INT_MAX/10){
            ans = 0;
            break;
        }
        ans = ans*10 + digit;
        n = n/10;
    }
    cout<<ans<<endl;
return 0;
}