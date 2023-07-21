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

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~BinaryTreeNode() {
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

pair<int,int> predecessorSuccessor(BinaryTreeNode<int>* root, int key)
{
    // Write your code here
    BinaryTreeNode<int>* temp = root;
    int pred = -1;
    int succ = -1;
    //find the key.
    while(temp->data != key){
        //here can be predecessor and successor
        if(temp->data > key){
            succ = temp->data;
            temp = temp->left;

        }else{
            pred = temp->data;
            temp = temp->right;
        }
    }
    //finding the predecessor in left subtree
    BinaryTreeNode<int>*leftTree = temp->left;
    while(leftTree){
        pred = leftTree->data;
        leftTree = leftTree->right;// maximum of left sub tree.
    }
    //finding the successor in right subtree
    BinaryTreeNode<int>*rightTree = temp->right;
    while(rightTree){
        succ = rightTree->data;
        rightTree = rightTree->left;// minimum of right sub tree.
    }
    pair<int,int> ans = {pred, succ};
    return ans;
}
