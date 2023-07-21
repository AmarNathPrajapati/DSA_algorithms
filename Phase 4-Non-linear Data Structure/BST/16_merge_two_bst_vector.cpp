#include <bits/stdc++.h> 
/*************************************************************
    
    Following is the Binary Tree node structure:

    class TreeNode{

        public :
            int data;
            TreeNode *left;
            TreeNode *right;

            TreeNode(int data) {
                this -> data = data;
                left = NULL;
                right = NULL;
            }

            ~TreeNode() {
            if (left){
            delete left;
            }

            if (right){
            delete right;
            }
        }   
    };

*************************************************************/
// s2: merge two sorted array
vector<int> mergeTwoArray(vector<int> v1, vector<int> v2){
    int i = 0, j = 0, k = 0;
    int size1 = v1.size();
    int size2 = v2.size();
    vector<int> v3(size1+size2);
    while(i<size1 && j<size2){
        if(v1[i]<v2[j]){
            v3[k++] = v1[i++];
        }else{
            v3[k++] = v2[j++];
        }
    }
    while(i<size1){
        v3[k++] = v1[i++];
    }
    while(j<size2){
        v3[k++] = v2[j++];
    }
    return v3;
}
// s1: create two sorted array
void inorder(TreeNode<int> *root, vector<int> &v){
    if(root==NULL){
        return;
    }
    inorder(root->left, v);
    v.push_back(root->data);
    inorder(root->right,v);
}
// s3: create a bst using the sorted array
TreeNode<int> * inorderToBST(int s, int e , vector<int> &v){
    if(s>e){
        return NULL;
    }
    int mid = (s+e)/2;
    TreeNode<int> *root = new TreeNode<int> (v[mid]);
    root->left = inorderToBST(s,mid-1,v);
    root->right = inorderToBST(mid+1,e,v);
    return root;
}
TreeNode<int> *mergeBST(TreeNode<int> *root1, TreeNode<int> *root2){
    // Write your code here.
    // s1: create two sorted array
    vector<int> v1,v2;
    inorder(root1,v1);//we know that inorder traversal of BST always sorted.
    inorder(root2,v2);
    // s2: merge two sorted array
    vector<int> v3 = mergeTwoArray(v1,v2);
    // s3: create a bst using the sorted array using inorder traversal.
    int s = 0;
    int e = v3.size()-1;
    TreeNode<int> * root = inorderToBST(s,e,v3);
    return root;
}