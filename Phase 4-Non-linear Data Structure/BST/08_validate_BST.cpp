#include <bits/stdc++.h> 
/*************************************************************
    Following is the Binary Tree node structure

    template <typename T>
    class BinaryTreeNode 
    {
      public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) 
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~BinaryTreeNode() 
        {
            if (left)
            {
                delete left;
            }
            if (right)
            {
                delete right;
            }
        }
    };

*************************************************************/
bool isBST(BinaryTreeNode<int>* root, int mini, int maxi){
    if(root==NULL){
        return true;
    }
    if(root->data>mini && root->data<maxi){
        bool left1 = isBST(root->left,mini,root->data);
        bool right1 = isBST(root->right,root->data, maxi);
        return left1 && right1;
    }else{
        return false;
    }
    
}
bool validateBST(BinaryTreeNode<int>* root) 
{
    // Write your code here
    return isBST(root,INT_MIN, INT_MAX);
}