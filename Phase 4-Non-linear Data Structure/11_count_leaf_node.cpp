/**********************************************************

    Following is the Binary Tree Node class structure:

    template <typename T>
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
    };
    
***********************************************************/
void leafCount (BinaryTreeNode<int> *root,int &count){
    if(root==NULL){
        return ;
    }
    if(root->left==NULL && root->right == NULL){
        count++;
    }
    leafCount(root->left,count);
    leafCount(root->right,count);
}
int noOfLeafNodes(BinaryTreeNode<int> *root){
    // Write your code here.
    int count = 0;
    leafCount(root,count);
    return count;
}