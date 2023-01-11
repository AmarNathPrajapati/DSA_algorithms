#include<vector>
class Solution{
  private:
  Node* reverse(Node* head){
      Node* curr = head;
      Node* prev = NULL;
      Node* forward = NULL;
      while(curr != NULL){
          forward = curr->next;
          curr->next = prev;
          prev = curr;
          curr = forward;
      }
      return prev;
  }
  Node* getMid(Node* head){
      Node* slow = head;
      Node* fast = head->next;
      while(fast != NULL && fast->next != NULL){
          fast = fast->next->next;
          slow = slow->next;
      }
      return slow;
  }
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        //empty or single
        if(head->next==NULL){
            return true;
        }
        //Your code here
        //get middle
        Node*mid = getMid(head);
        Node*temp = mid->next;
        mid->next = reverse(temp);
        //compare
        Node* h1= head;
        Node*h2 = mid->next;
        while(h2 != NULL){
            if(h1->data != h2->data){
                return false;
            }
            h1 = h1->next;
            h2 = h2->next;
        }
        return true;
    }
};
