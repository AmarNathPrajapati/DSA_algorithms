#include <bits/stdc++.h> 
#include <iostream>
using namespace std;
    void rotateLeft(vector<int>&arr,int size,int k){
        vector<int>temp(size);
        for(int i = 0; i<size; i++){
            if(i>=k){
                temp[(i-k)%size]=arr[i];
            }else{
                temp[((i-k)%size)+size]=arr[i];
            }
        }
        for(int val: temp){
            cout<<val<<" ";
        }
        
    }
int main() {
    //Write your code here
    int size;
    cin>>size;
    vector<int>arr;
    for(int i = 0; i<size; i++){
        int n;
        cin>>n;
        arr.push_back(n);
    }
    int k;
    cin>>k;
    rotateLeft(arr,size,k);
    return 0;
}