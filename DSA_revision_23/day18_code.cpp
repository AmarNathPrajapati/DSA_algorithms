#include<bits/stdc++.h>
using namespace std;

//1.construce a node for the binary tree
class Node{
    public:
    int data;
    Node*left;
    Node*right;
    Node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
//2.implement recursive buildtree function using recursion
Node* buildTree(Node*root){
    int data;
    cin>>data;
    root=new Node(data);
    if(root->data==-1){
        return NULL;
    }
    root->left = buildTree(root->left);
    root->right = buildTree(root->right);
    return root;
}
//3.Perform level order traversal using the queue
void levelOrderTraversal(Node *root){
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        Node*temp = q.front();
        q.pop();
        cout<<temp->data<<" ";
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }
}
//4.Beautified level order traversal
void BeautifiedLOT(Node*root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node*temp = q.front();
        q.pop();
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}
//5.Perform various traversal (inorder ,preorder, postorcer)
void inorder(Node*root){
    if(root==NULL){
        return ;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void preorder(Node*root){
    if(root==NULL){
        return ;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(Node*root){
    if(root==NULL){
        return ;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
//6.Build a tree using the level order traversal
void buildTreeLOT(Node* &root){
    queue<Node*>q;
    int data;
    cin>>data;
    root= new Node(data);
    q.push(root);
    while(!q.empty()){
        Node*temp = q.front();
        q.pop();
        int leftData;
        cin>>leftData;
        if(leftData != -1){
            temp->left = new Node(leftData);
            q.push(temp->left);
        }
        int rightData;
        cin>>rightData;
        if(rightData != -1){
            temp->right = new Node(rightData);
            q.push(temp->right);
        }
    }
}
//7Implement the main function
int main(){
    Node*root = NULL;
    // root = buildTree(root);
    //1 2 4 -1 -1 5 -1 -1 3 -1 -1
    // levelOrderTraversal(root);
    // cout<<endl;
    buildTreeLOT(root);
    //1 2 3 -1 -1 -1 -1
    BeautifiedLOT(root);


}