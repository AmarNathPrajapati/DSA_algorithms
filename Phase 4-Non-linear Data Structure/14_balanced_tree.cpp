/**
 * time complexity O(n^2)
 * space complexity O(h)
*/
class Solution{
    public:
    int height(Node*root){
        if(root==NULL){
            return 0;
        }
        int left = height(root->left);
        int right = height(root->right);
        int ans = max(left,right)+1;
        return ans;
    }
    //Function to check whether a binary tree is balanced or not.
    
    bool isBalanced(Node *root)
    {
        //  Your Code here
        //base case
        if(root==NULL){
            return true;
        }
        //recursive call for left and right tree
        bool left = isBalanced(root->left);
        bool right = isBalanced(root->right);
        //calculate absolute difference
        bool diff = (abs(height(root->left)-height(root->right))<= 1);
        //return according to condition
        if(left && right && diff){
            return true;
        }else{
            return false;
        }
    }
};
/**
 * time complexity O(n)
 * space complexity O(h)
*/
class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
    pair<bool,int> isBalancedFast(Node *root)
    {
        //Your Code here
        //base case
        if(root==NULL){
            pair<bool,int>p = make_pair(true,0);
            return p;
        }
        //recursive call for left and right tree
        pair<bool,int>leftAns = isBalancedFast(root->left);
        pair<bool,int>rightAns = isBalancedFast(root->right);
        bool left = leftAns.first;
        bool right = rightAns.first;
        //calculate absolute difference
        bool diff = (abs(leftAns.second-rightAns.second)<= 1);
        pair<bool,int>ans;
        //return according to condition
        ans.second = max(leftAns.second, rightAns.second)+1;
        if(left && right && diff){
           ans.first = true;
        }else{
            ans.first = false;
        }
        
        return ans;
    }
    bool isBalanced(Node *root)
    {
        //  Your Code here
        return isBalancedFast(root).first;
    }
};