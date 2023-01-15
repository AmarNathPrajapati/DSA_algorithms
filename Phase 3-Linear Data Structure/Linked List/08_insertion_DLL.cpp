#include<iostream>
using namespace std;
//implementing node using the class
class Node{
    public:
        int data;
        Node* next = NULL;
        Node* prev = NULL;
        Node(int d){
            this->data = d;
            this->next = NULL;
            this->prev = NULL;
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
void reversePrint(Node * &tail){
    Node *temp = tail;
    cout<<"Printing reverse linked list: ";
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp -> prev;
    }
    cout<<endl;
}
int lenghtList(Node * &head){
    int count = 0;
    Node *temp = head;
    while(temp != NULL){
        temp = temp -> next;
        count++;
    }
    return count;
}
//Insertino at first
void insertionAtFirst(Node* &head, int d){
    Node * newNode  = new Node(d);
    cout<<"After insertion of "<< d<<" at first: "<<endl;
    Node * temp = head;
    newNode->next = temp;
    temp ->prev = newNode;
    head = newNode;
}
//Insertino at last
void insertionAtLast(Node* &tail, int d){
    Node * newNode  = new Node(d);
    cout<<"After insertion of "<< d<<" at last: "<<endl;
    Node * temp = tail;
    temp->next = newNode;
    newNode ->prev = temp;
    tail = newNode;
}
//insertion at given position
void insertAtPosition(Node * &head,int d, int position){
    Node *newNode = new Node(d);
    cout<<"After inserting "<<d<<" at "<<position<<"th position "<<endl;
    int count = 1;
    Node *p = head;
    Node *q = head->next;
    while(count<position-1){
        p = p->next;
        q = q->next;
        count++;
    }
    newNode->next = q;
    newNode->prev = p;
    p->next = newNode;
    q->prev = newNode;
}
int main(){
    //dynamic allocation for node
    Node *n1 = new Node(5);
    Node *head = n1;// head for tracking the linked list.
    Node *tail = n1;
    print(head);
    reversePrint(head);

    insertionAtFirst(head,70);
    print(head);
    reversePrint(tail);
    cout<<endl;
    
    insertionAtFirst(head,50);
    print(head);
    reversePrint(tail);
    cout<<endl;

    insertionAtFirst(head,30);
    print(head);
    reversePrint(tail);
    cout<<endl;

    insertionAtFirst(head,20);
    print(head);
    reversePrint(tail);
    cout<<endl;

    insertionAtFirst(head,10);
    print(head);
    reversePrint(tail);
    cout<<endl;

    insertionAtLast(tail,15); 
    print(head);
    reversePrint(tail);
    cout<<endl;

    insertionAtLast(tail,25); 
    print(head);
    reversePrint(tail);
    cout<<endl;

    insertionAtLast(tail,35); 
    print(head);
    reversePrint(tail);
    cout<<endl;

    insertAtPosition(head,27,3);
    print(head);
    reversePrint(tail);
    cout<<endl;


return 0;
}