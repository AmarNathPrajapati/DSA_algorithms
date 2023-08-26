vector<int> reverseLevelOrder(Node *root)
{
    // code here
    vector<int>ans;
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        Node* temp = q.front();
        if(temp->right){
            q.push(temp->right);
        }
        if(temp->left){
            q.push(temp->left);
        }
        q.pop();
        ans.push_back(temp->data);
    }
    reverse(ans.begin(),ans.end());
    return ans;
}