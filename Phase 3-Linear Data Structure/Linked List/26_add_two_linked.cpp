class Solution
{
    private:
    struct Node *reverse(struct Node *head){
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
void insertAtTail(struct Node* &head,struct Node* &tail, int val){
    Node *temp = new Node(val);//node for the answer digit
    if(head==NULL){//for the first digit.
        head = temp;
        tail = temp;
        return;
    }else{
        tail ->next = temp;
        tail = temp;
    }
}
struct Node* add(struct Node *first ,struct  Node *second){
    Node *ansHead = NULL;
    Node *ansTail = NULL;
    int carry = 0;
    
    while(first != NULL || second != NULL || carry != 0){
        int val1 = 0;
        if(first != NULL){
            val1 = first->data;
        }
        int val2 = 0;
        if(second != NULL){
            val2 = second->data;
        }
        int sum = val1 + val2 + carry;
        int digit = sum%10;
        //insert node;
        insertAtTail(ansHead, ansTail, digit);
        //update pointers
        carry = sum/10;
        if(first != NULL){
            first = first->next;
        }
        if(second != NULL){
            second = second->next;
        }
    }
    return ansHead;
}
    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        //reverse the linked list
        first = reverse(first);
        second = reverse(second);
        //add two reverse linked list
        struct Node*ans = add(first,second);
        //reverse the answer
        ans = reverse(ans);
        return ans;
    }
};