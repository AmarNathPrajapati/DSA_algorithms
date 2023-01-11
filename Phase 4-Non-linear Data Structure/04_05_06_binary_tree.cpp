#include<iostream>
#include<queue>
using namespace std;
//implementing node class for binary tree
class Node{
    public:
        int data;
        //for n-ary tree
        // list<Node*> l;
        Node*left;
        Node*right;
        Node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
        }
};
Node* buildTree(Node *root){
    //recursive approach to build a tree
    
    cout<<"Enter the value of current node "<<endl;
    int rootData;
    cin>>rootData;
    root = new Node(rootData);
    //base case
    if(root->data==-1){
        return NULL;
    }
    //taking data for left tree
    cout<<"Enter the data for left value of "<<root->data<<endl;
    root->left = buildTree(root->left);
    //taking data for right tree
    cout<<"Enter the data for right value of "<<root->data<<endl;
    root->right = buildTree(root->right);
    return root;
}
void levelOrderTraversal(Node*root){
    cout<<"level order traversal.........."<<endl;
    if(root==NULL){
        return ;
    }
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node *temp  = q.front();
        cout<<temp->data<<" ";
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }

}
//Implementing the level order traversal 
int main(){
    Node *root = NULL;
    root = buildTree(root);
    levelOrderTraversal(root);
return 0;
}