#include <bits/stdc++.h> 
/************************************************************
    Following is the Binary Search Tree node structure
    
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

TreeNode<int>* LCAinaBST(TreeNode<int>* root, TreeNode<int>* P, TreeNode<int>* Q)
{
	// Write your code here
    if(root==NULL){
        return NULL;
    }
    if(P->data>root->data && Q->data > root->data){
        return LCAinaBST(root->right, P, Q);
    }else if(P->data<root->data && Q->data < root->data){
        return LCAinaBST(root->left, P, Q);
    }else{
        return root;
    }
}
