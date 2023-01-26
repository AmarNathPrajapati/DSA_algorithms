#include <bits/stdc++.h> 
/*
    Following is the class structure of BinaryTreeNode class for referance:

    class BinaryTreeNode {
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
            if (left){
                delete left;
            }
            if (right){
                delete right;
            }
        }
    };
*/
BinaryTreeNode<int>* solve(vector<int> &p, int min, int max, int &i){
    if(i>p.size()-1){
        return NULL;
    }
    if(p[i]<min || p[i]>max){
        return NULL;
    }
    BinaryTreeNode<int>* root = new BinaryTreeNode<int> (p[i++]);
    root->left = solve(p,min,root->data,i);
    root->right = solve(p,root->data,max,i);
    return root;
}
BinaryTreeNode<int>* preorderToBST(vector<int> &preorder) {
    // Write your code here.
    int i = 0;
    return solve(preorder,INT_MIN,INT_MAX,i);
}