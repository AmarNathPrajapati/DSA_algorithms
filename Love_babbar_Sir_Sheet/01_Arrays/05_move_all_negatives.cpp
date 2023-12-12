#include<bits/stdc++.h>
using namespace std;
void move_negative(int arr[],int n){
    vector<int>pos;
    vector<int>neg;
    for(int i = 0; i<n; i++){
        if(arr[i]>0){
            pos.push_back(arr[i]);
        }else{
            neg.push_back(arr[i]);
        }
    }
    for(auto val: neg){
        pos.push_back(val);
    }
    for(int i = 0; i<n; i++){
        arr[i] = pos[i];
    }
}
int main(){
    int arr[] = {-1,2,3,4,-5,7,8,-9};
    int n = sizeof(arr)/sizeof(int);
    move_negative(arr,n);
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}