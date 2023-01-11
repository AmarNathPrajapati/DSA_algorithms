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
//length of the linked list
int lengthOfList(Node* &head){
    Node *temp = head;
    int length = 0;
    while(temp != NULL){
        temp = temp -> next;
        length++;
    }
    return length;
}
//middle of the linked list.
int middleOfList(Node *head){
    int length = lengthOfList(head);
    int mid = length/2;
    Node* temp = head;
    int count = 0;
    while(count<mid){
        temp = temp ->next;
        count++;
    }
    int ans = temp -> data;
    return ans;
}
//optimal solution to find middle of the linked list.
int middleOfListOptimal(Node *head){
    Node*fast = head->next;
    Node*slow = head;
    while(fast != NULL){
        fast = fast->next;
        if(fast!=NULL){
            fast = fast->next;
        }
        slow = slow->next;
    }
    int ans = slow->data;
    return ans;
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
    insertionAtFirst(head,55);
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
    cout<<"Length of list: "<<lengthOfList(head);
    cout<<endl;
    cout<<"middle element of list: "<<middleOfList(head);
    cout<<endl;
    cout<<"middle element of list by optimized solution: "<<middleOfListOptimal(head);

return 0;
}