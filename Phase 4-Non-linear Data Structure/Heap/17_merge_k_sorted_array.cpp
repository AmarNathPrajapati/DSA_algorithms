#include <bits/stdc++.h> 
    // s2: create node class and compare operator
    class node{
        public: 
            int data,i,j;
            node(int data,int row,int col){
                this->data = data;
                this->i = row;
                this->j = col;
            }
    };
    class compare{
        public:
            bool operator()(node*a,node*b){
                return a->data>b->data;
            }
    };
vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k)
{
    //bruteForce approach:
    //combine all and sort and return;
    // Write your code here. 
    // s1: create a min heap for class node
    priority_queue<node*,vector<node*>,compare>minHeap;
    // s3: push first element each array
    for(int i = 0; i<k; i++){
        node*temp = new node (kArrays[i][0],i,0);
        minHeap.push(temp);
    }
    // s4: push all element in the answer vector
    vector<int>ans;
    while(minHeap.size()>0){
        node*temp = minHeap.top();
        ans.push_back(temp->data);
        minHeap.pop();
          // s5: if next element present the push in the heap
        int i = temp->i;
        int j = temp->j;
        if(j+1<kArrays[i].size()){
            node*next = new node(kArrays[i][j+1],i,j+1);
            minHeap.push(next);
        }
    }
    return ans;
  
}
