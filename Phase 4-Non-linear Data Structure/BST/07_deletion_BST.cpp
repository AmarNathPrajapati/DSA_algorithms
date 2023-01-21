#include<iostream>
#include<queue>
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
void preOrderTraversal(Node *root){
    if(root==NULL){
        return ;
    }
    cout<<root->data<<" ";
    preOrderTraversal (root->left);
    preOrderTraversal(root->right);
}
void postOrderTraversal(Node *root){
    if(root==NULL){
        return ;
    }
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout<<root->data<<" ";
}
void beautifiedLevelOrderTraversal(Node*root){
    cout<<"Beautified level order traversal.........."<<endl;
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node *temp  = q.front();
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
Node* miniNode(Node *root){
    Node *temp = root;
    while(temp->left != NULL){
        temp = temp ->left;
    }
    return temp;
}
Node* maxiNode(Node *root){
    Node *temp = root;
    while(temp->right != NULL){
        temp = temp ->right;
    }
    return temp;
}
Node * deleteFromBST(Node*root, int val){
    if(root==NULL){
        return root;
    }
    if(root->data == val){
        // 0 child
        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }
        else if(root->left != NULL && root->right == NULL){
            Node*temp = root->left;
            delete root;
            return temp;
        }else if(root->left == NULL && root->right != NULL){
            Node *temp = root->right;
            delete root;
            return temp;
        }else{
            int mini = miniNode(root->right)->data;
            root->data = mini;
            root->right = deleteFromBST(root->right,mini);
            return root;
        }
    }
        else if(root->data>val){
            root->left = deleteFromBST(root->left,val);
            return root;
        }else {
            root->right = deleteFromBST(root->right,val);
            return root;
        }
}
int main(){
    Node *root = NULL;
    cout<<"Enter the data: "<<endl;
    takeInput(root);

    // cout<<"Inorder Traversal "<<endl;
    // inorderTraversal(root);
    // cout<<endl;
    // cout<<"PreOrder Traversal"<<endl;
    // preOrderTraversal(root);
    // cout<<endl;
    // cout<<"PostOrder Traversal "<<endl;
    // postOrderTraversal(root);
    // cout<<endl;
    cout<<"Level Order Traversal "<<endl;
    beautifiedLevelOrderTraversal(root);
    cout<<endl;
    cout<<"Enter the value for deletion"<<endl;
    int val;
    cin>>val;
    deleteFromBST(root,val);
    cout<<"Level Order Traversal "<<endl;
    beautifiedLevelOrderTraversal(root);
    cout<<endl;
return 0;
}