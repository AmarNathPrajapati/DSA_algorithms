#include<vector>
bool checkPalindrome(vector<int> v){
    int size = v.size();
    int s = 0;
    int e = size-1;
    while(s<=e){
        if(v[s] != v[e]){
            return 0;
        }
        s++;
        e--;
    }
    return 1;
}
class Solution{
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        //Your code here
        vector<int> v;
        Node *temp = head;
        while(temp != NULL){
            v.push_back(temp->data);
            temp=temp->next;
        }
        return checkPalindrome(v);
    }
};