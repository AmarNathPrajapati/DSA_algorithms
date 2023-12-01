#include<bits/stdc++.h>
using namespace std;
bool solve(int arr[], int size){
    //prefix sum array
    vector<int>parr;
    int sum = 0;
    for(int i = 0; i<size; i++){
        sum = sum + arr[i];
        if(arr[i] == 0 || sum== 0){
            return true;
        }
        parr.push_back(sum);
    }
    unordered_set<int>s;
    for(int i = 0; i<parr.size(); i++){
        s.insert(parr[i]);
    }
    if(parr.size()>s.size()){
        return true;
    }else{
        return false;
    }
}
int main(){
    int arr[] = {4,2, -3, 1,6};
    int size = sizeof(arr)/sizeof(int);
    cout<<solve(arr,size);
return 0;
}