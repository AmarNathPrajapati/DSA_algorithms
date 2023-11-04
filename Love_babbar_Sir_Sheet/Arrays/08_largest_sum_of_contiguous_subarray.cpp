#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>&v){
    int sum = 0;
    int maxi = 0;
    for(int i = 0; i<v.size(); i++){
        sum = sum + v[i];
        maxi = max(maxi,sum);
        if(sum<0){
            sum = 0;
        }
    }
    return maxi;
}
int main(){
    vector<int>v = {1,2,-3,4,5,-6,8,-2,9,-15};
    int n= v.size();  // size of the array
    int longest_sum = solve(v);
    cout<<"Longest Sum of Sub array: "<<longest_sum<<endl;
    return 0;
}