//basically we are going to find the minimum range for which each list have at least one element.
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
    //s3: push first column in the heap
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
        mini = temp->data;//mini updated because minHeap return only minimum element.
        if(maxi-mini<end-start){//if new range old range se minimum hai then update the value of end and start.
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



//leetcode
class Solution {
public:
    //create a class node which have info about rows and cols
    class Node{
        public:
            int data,row,col;
            Node(int val,int i,int j){
                this->data = val;
                this->row = i;
                this->col = j;
            }
    };
    //creata a compare class
    class compare{
        public:
            bool operator()(Node*a,Node*b){
                return a->data > b->data;
            }
    };
    vector<int> smallestRange(vector<vector<int>>& nums) {
        int k = nums.size();
        //create a minHeap
        priority_queue<Node*,vector<Node*>,compare>minHeap;
        int maxi = INT_MIN;
        int mini = INT_MAX;
        //push first k element in the list
        for(int i = 0; i<k; i++){
            int element = nums[i][0];
            minHeap.push(new Node(element,i,0));
            //find first mini and maxi
            maxi = max(maxi,element);
            mini = min(mini,element);
        }
        //declare start and end.
        int start = mini;
        int end = maxi;
        //process each next element if present.
        while(!minHeap.empty()){
            //get top and pop
            Node*temp = minHeap.top();
            minHeap.pop();
            mini = temp->data;//for the smallest range.
            //update the range
            if((maxi-mini)<(end-start)){
                start = mini;
                end = maxi;
                // cout<<start<<" "<<end<<endl;
            }
            //process next element and update the maxi
            if(temp->col+1<nums[temp->row].size()){
                maxi = max(maxi,nums[temp->row][temp->col+1]);
                minHeap.push(new Node(nums[temp->row][temp->col+1],temp->row,temp->col+1));
            }else{
                break;
            }
        }
        //return the range.
        vector<int>ans;
        ans.push_back(start);
        ans.push_back(end);
        return ans;
    }
};