#include <bits/stdc++.h> 
/************************************************************

    Following is the Binary Tree node structure
    
    template <typename T>
    class TreeNode {
        public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

************************************************************/
class Info{
    public:
        int maxi;
        int mini;
        bool isBST;
        int size;
};
Info solve(TreeNode<int>*root,int &ans){
    //base case
    if(root==NULL){
        Info i;
        i.maxi = INT_MIN;
        i.mini = INT_MAX;
        i.isBST = true;
        i.size = 0;
        return i;
    }
    Info left = solve(root->left,ans);
    Info right = solve(root->right,ans);
    Info currNode;
    currNode.size = left.size + right.size + 1;
    currNode.maxi = max(root->data,right.maxi);
    currNode.mini = min(root->data,left.mini);
    //check bst
    if(left.isBST && right.isBST && (root->data>left.maxi && root->data<right.mini)){
        currNode.isBST = true;
    }else{
        currNode.isBST = false;
    }
    //update the bst
    if(currNode.isBST){
        ans = max(ans,currNode.size);
    }
    return currNode;

}
int largestBST(TreeNode<int>* root) 
{
    // Write your code here.
    int maxSize = 0;
    Info i = solve(root,maxSize);
    return maxSize;

}
