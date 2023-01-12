class Solution{
    public:
    //Function to find the height of a binary tree.
    int height(struct Node* node){
        // code here 
        if(node==NULL){
            return 0;
        }
        //recursive approach
        int h1 = height(node->left);
        int h2 = height(node->right);
        int ans = max(h1,h2)+1;
        return ans;
    }
};