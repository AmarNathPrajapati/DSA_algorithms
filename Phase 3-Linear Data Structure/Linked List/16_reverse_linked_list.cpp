#include<iostream>
using namespace std;
//implementing node using the class
class Node{
    public:
        int data;
        Node* next;
        Node(int d){
            this->data = d;
            this->next = NULL;
        }
};
void print(Node* &head){
    //never want to change head
    Node *temp = head;
    cout<<"Printing linked list: ";
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}
//insertion at first.
void insertionAtFirst(Node* &head,int d){//using reference so there is no need to return head.
    cout<<"After insertion of "<< d<<" at first: "<<endl;
    Node *newNode = new Node(d);
    newNode->next = head;
    head = newNode;
}
//insertion at end
void insertionAtEnd(Node* &tail, int d){//using reference no need to return tail again.
    cout<<"After insertion of "<< d<<" at end: "<<endl;
    Node *newNode = new Node(d);
    tail->next = newNode;
    tail = newNode;

}
//insertion by position
void insertAtPosition(Node* &head, int d, int position){
    cout<<"After inserting "<<d<<" at "<<position<<"th position "<<endl;
    Node *newNode = new Node(d);
    Node *p = head;
    Node *q = head->next;
    int count = 1;
    while(count<position-1){
        p = p->next;
        q = q->next;
        count++;
    }
    p->next = newNode;
    newNode->next = q;
}
//reversing a string via iterative method
void reverseListIterative(Node* &head){
    cout<<"Reversing the list iteratively: "<<endl;
    Node* prev = NULL;
    Node* curr = head;
    //kahi track choot na jaye so using forward
    Node* forward=NULL;
    while(curr != NULL){
        forward = curr->next;
        curr->next = prev;
        //updation of pointer
        prev = curr;
        curr = forward;
    }
    head = prev;
}
//recursive method for revese a linked list.
void reverse(Node *&head, Node *curr, Node*prev){
    //base
    if(curr == NULL){
        head = prev;
        return;
    }
    //processing
    Node*forward = curr->next;
    //rr
    reverse(head,forward,curr);
    curr->next =prev;
}
void reverseListRecursely(Node * &head){
    cout<<"Reversing the list recursively: "<<endl;
    Node *prev = NULL;
    Node *curr = head;
    reverse(head,curr,prev);
}
Node *reverseBestMethod(Node *&head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node *chead = reverseBestMethod(head->next);
    head->next->next = head;
    head ->next = NULL;
    return chead;
}
int main(){
    //dynamic allocation for node
    Node *n1 = new Node(5);
    Node *head = n1;// head for tracking the linked list.
    Node *tail = n1;//tail make insertion easy at end.
    print(head);
    insertionAtFirst(head,3);
    print(head);
    insertionAtFirst(head,2);
    print(head);
    insertionAtFirst(head,1);
    print(head);
    insertionAtEnd(tail,6);
    print(head);
    insertionAtEnd(tail,9);
    print(head);
    insertionAtEnd(tail,11);
    print(head);
    insertionAtEnd(tail,15);
    print(head);
    insertAtPosition(head,12,3);
    print(head);
    insertAtPosition(head,14,6);
    print(head);
    insertAtPosition(head,16,9);
    print(head);
    // reverseListIterative(head);
    // print(head);
    // reverseListRecursely(head);
    // print(head);
    cout<<"Reversing the list recursively with optimized solution: "<<endl;
    head = reverseBestMethod(head);
    print(head);
return 0;
}