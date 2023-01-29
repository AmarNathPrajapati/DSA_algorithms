#include<bits/stdc++.h>
int maximumFrequency(vector<int> &arr, int n)
{
    //Write your code here
    //s1: create a unordered map and map all element to its count
    unordered_map<int,int> count;
    int size = arr.size();
    int maximumFrequency = INT_MIN;
    for(int i = 0; i<size; i++){
        count[arr[i]]++;
        maximumFrequency = max(maximumFrequency,count[arr[i]]);
    }
    //s2: find max frequency  of first occurrence
    int ans = 0;
    for(int i = 0; i<size; i++){
        if(maximumFrequency==count[arr[i]]){
            ans = arr[i];
            break;
        }
    }
    return ans;
}