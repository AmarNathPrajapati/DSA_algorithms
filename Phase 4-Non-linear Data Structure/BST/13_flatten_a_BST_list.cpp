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
void inorder(TreeNode<int>* root, vector<TreeNode<int>*> &v){
    if(root==NULL){
        return ;
    }
    inorder(root->left, v);
    v.push_back(root);
    inorder(root->right,v);
}
TreeNode<int>* flatten(TreeNode<int>* root)
{
    // Write your code here
    vector<TreeNode<int>*>v;
    inorder(root,v);
    TreeNode<int>* newRoot = new TreeNode<int>(v[0]->data);
    TreeNode<int>* curr = newRoot;
    int size = v.size();
    for(int i= 1; i<size; i++){
        TreeNode<int> *temp = new TreeNode<int>(v[i]->data);
        curr->left = NULL;
        curr->right = temp;
        curr =temp;
    }
    curr->left = NULL;
    curr->right = NULL;
    return newRoot;
}
