#include<bits/stdc++.h>
using namespace std;
int solve(int arr[], int n){
    int maxi = INT_MIN;
    int ans = 1;
    for(int i = 0; i<n; i++){
        ans = ans*arr[i];
        maxi = max(ans,maxi);
        if(ans==0){
            ans=1;
        }
    }
    ans = 1;
    for(int i = n-1; i>=0; i--){
        ans = ans*arr[i];
        maxi = max(ans,maxi);
        if(ans == 0){
            ans = 1;
        }
    }
    return maxi;
}
int main(){
    int arr[] = {6, -3, -10, 0, 2};
    int size = sizeof(arr)/sizeof(int);
    cout<<solve(arr,size);
return 0;
}