#include<iostream>
using namespace std;
class Node{
    
    public:
    int data;
    Node*right;
    Node*left;
        Node(int d){
            this->data = d;
            right = NULL;
            left = NULL;
        }
};

Node* insertIntoBST(Node* &root, int data){
    if(root==NULL){
        root = new Node(data);
        return root;
        // cout<<"root"<<endl;
    }
    //left subtree
    if(data < root->data){
        root->left = insertIntoBST(root->left,data);
        // cout<<"root->left"<<endl;
    }else{
        root->right = insertIntoBST(root->right,data);
        // cout<<"root->right"<<endl;
    }
    return root;
    //right subtree
}
void takeInput(Node * &root){
    int data;
    cin>>data;
    while(data != -1){
        root = insertIntoBST(root, data);
        cin>>data;
    }
}
// 10 8 15 7 9 14 16 -1
void inorderTraversal(Node *root){
    if(root==NULL){
        return ;
    }
    inorderTraversal(root->left);
    cout<<root->data<<" ";
    inorderTraversal(root->right);
}
int main(){
    Node *root = NULL;
    cout<<"Enter the data: "<<endl;
    takeInput(root);
    cout<<"Inorder Traversal "<<endl;
    inorderTraversal(root);
return 0;
}