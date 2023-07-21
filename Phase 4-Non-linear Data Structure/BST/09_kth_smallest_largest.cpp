#include <bits/stdc++.h> 
/*************************************************************
 
    Following is the Binary Tree node structure

    class BinaryTreeNode 
    {
    public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/
int solve(BinaryTreeNode<int>* root, int &i, int k){
    if(root==NULL){
        return -1;
    }
    int left = solve(root->left, i, k);
    if(left != -1){//it return the answer to further ancestor.
        return left;//not -1 means it have a answer.
    }
    i++;//jf left -1 check further in right direction also.
    if(i==k){//
        return root->data;//kth minimum element was found.
    }
    return solve(root->right,i,k);//minimum ka just maximum element.
}
int kthSmallest(BinaryTreeNode<int>* root, int k) {
    // Write your code here.
    int i = 0;
    return solve(root,i,k);
}