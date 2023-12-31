#include<bits/stdc++.h>
using namespace std;
int solve(int arr[], int n){
    unordered_set<int>s;
    for(int i = 0; i<n; i++){
        s.insert(arr[i]);
    }
    int maxi = 1;
    for(int i = 0;i<n; i++){
        if(s.find(arr[i]-1)!=s.end()){
            continue;
        }else{
            int count = 0;
            int current = arr[i];
            while(s.find(current)!=s.end()){
                count++;
                current++;
            }
            maxi = max(count,maxi);
        }
    }
    return maxi;
}
int main(){
    int arr[] = {2,6,1,9,4,5,3};
    int size = sizeof(arr)/sizeof(int);
    cout<<solve(arr, size)<<endl;
return 0;
}