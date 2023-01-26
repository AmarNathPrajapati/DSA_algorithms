#include<bits/stdc++.h>
//s1: create a class node and compare function
class node{
    public:
        int data,row,col;
        node(int data,int row,int col){
            this->data = data;
            this->row = row;
            this->col =col;
        }
};
class compare{
    public:
        bool operator()(node*a,node*b){
            return (a->data > b->data);
        }
};
int kSorted(vector<vector<int>> &a, int k, int n) {
    // Write your code here.
    
    //s2: declare a priority queue for min heap
    priority_queue<node*,vector<node*>,compare>minHeap;
    //s3: push first row in the heap
    int maxi=INT_MIN,mini=INT_MAX;
    for(int i = 0; i<k; i++){
        int element = a[i][0];
        minHeap.push(new node(element,i,0));
        //s4: track mini and maxi
        maxi = max(maxi,element);
        mini = min(mini,element);
    }
    int start=mini;
    int end = maxi;
    //s5: while min heap not empty update the range
    while(!minHeap.empty()){
        node*temp = minHeap.top();
        minHeap.pop();
        mini = temp->data;
        if(maxi-mini<end-start){
            start = mini;
            end = maxi;
        }
        //s6: if next element exist add that element in the heap
        if(temp->col+1<n){
            maxi = max(maxi,a[temp->row][temp->col+1]);
            minHeap.push(new node(a[temp->row][temp->col+1],temp->row,temp->col+1));
        }else{
            break;
        }
    }
    //s7: return the range.
    return end-start+1;
}