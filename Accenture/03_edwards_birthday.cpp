#include<iostream>
using namespace std;
#define mod 1000000007;
int main(){
    int n = 5;
    int ans = ((n*(n+1))/2) + 1;
    cout<<"Required ans is: "<<ans%mod;
return 0;
}