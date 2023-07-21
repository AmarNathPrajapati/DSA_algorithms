#include <bits/stdc++.h> 
/**********************************************************************

    Following is the class structure of the Node class for reference:

    class Node{
    public:
        int data;
        Node *next;
        Node(int data)
        {
	        this->data = data;
	        this->next = NULL;
        }
    };

********************************************************************/
Node* findMid(Node*head){
    Node*slow= head;
    Node*fast = head->next;
    while(fast !=NULL && fast->next != NULL){
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

Node* merge(Node* left, Node* right)
{
    // Write your code here.
    if(left==NULL){
        return right;
    }
    if(right==NULL){
        return left;
    }
    Node*ans = new Node(-1);
    Node*temp = ans;
    while(left !=NULL && right != NULL){
        if(left->data<right->data){
            temp->next = left;
            temp = left;
            left = left->next;
        }else{
            temp ->next = right;
            temp = right;
            right= right->next;
        }
    }
    while( left != NULL){
            temp->next = left;
            temp = left;
            left = left->next;
    }
    while(right != NULL){
            temp ->next = right;
            temp = right;
            right= right->next;
    }
    ans = ans->next;
    return ans;
}
Node *sortLL(Node *head){
    // Write your code here.
    //return if head is empty of the only one element
    if(head == NULL || head ->next==NULL){
        return head;
    }
    Node*mid = findMid(head);
    //breaking the linked list into two halves
    Node*left=head;
    Node*right = mid->next;
    mid->next = NULL;
    //recursive call for the left and right part
    left = sortLL(left);
    right = sortLL(right);
    //merge both left and right halves
    Node*result = merge(left,right);
    return result;

}