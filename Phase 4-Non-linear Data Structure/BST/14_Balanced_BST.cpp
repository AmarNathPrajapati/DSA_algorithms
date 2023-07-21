/*************************************************************
    Following is the Binary Serach Tree node structure

    template <typename T>
    class TreeNode
    {
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
            if (left)
                delete left;
            if (right)
                delete right;
        }
    };

*************************************************************/
void inorder(TreeNode<int>* root, vector<int> &v){
    if (root==NULL){
        return;
    }
    inorder(root->left,v);
    v.push_back(root->data);
    inorder(root->right,v);
}
TreeNode<int>* inOrderBST(int s, int e, vector<int> &v){
    if(s>e){
        return NULL;
    }
    int mid =(s+e)/2;//getting the mid element
    TreeNode<int>* root = new TreeNode<int>(v[mid]);
    root->left = inOrderBST(s, mid-1, v);//attach the half part less that mid to left and right so that tree should be balanced tree.
    root->right = inOrderBST(mid+1,e,v);//
    return root;
}
TreeNode<int>* balancedBst(TreeNode<int>* root) {
    // Write your code here.
    //normal bst to balanced bst
    vector<int> v;
    inorder(root,v);
    return inOrderBST(0, v.size()-1, v);
}
