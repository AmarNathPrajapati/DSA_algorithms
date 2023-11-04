//find kth maximum and minimum element in an array
#include<bits/stdc++.h>
using namespace std;

int kth_min(vector<int>&v, int k){
priority_queue<int>maxHeap;
for(int i = 0; i<k;i++){
	maxHeap.push(v[i]);
}

for(int i = k; i<v.size(); i++){
	if(v[i]<maxHeap.top()){
    maxHeap.pop();
    maxHeap.push(v[i]);
    }
}
return maxHeap.top();
}
int kth_max(vector<int>&v, int k){
    int n = v.size();
    priority_queue<int,vector<int>,greater<int>>minHeap;
    for(int i = 0; i<k; i++){
        minHeap.push(v[i]);
    }
    for(int i=k; i<n; i++){
        if(v[i]>minHeap.top()){
            minHeap.pop();
            minHeap.push(v[i]);
        }
    }
    return minHeap.top();
}
int main(){
    vector<int>v = {1,2,4,56,32,12,0};
    int k = 2;
    int kmin = kth_min(v,k);
    cout<<"kth minimum of element is: "<<kmin<<endl;
    int kmax = kth_max(v,k);
    cout<<"kth minimum of element is: "<<kmax<<endl;
    
return 0;
}

