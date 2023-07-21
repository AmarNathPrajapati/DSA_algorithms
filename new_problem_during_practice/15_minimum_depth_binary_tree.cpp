class Solution {
public:
    int solve(TreeNode*root){
        if(root == NULL){
            return 0;
        }
        
        int left = solve(root->left);
        int right = solve(root->right);

        if(root->left && root->right){
            return min(left+1, right+1);
        }
        return max(left+1, right+1);
    }
    int minDepth(TreeNode* root) {
        return solve(root);
    }
};