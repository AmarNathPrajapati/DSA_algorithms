// a single element should be circular
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
//inserting a node using tail via data
void insertNode(Node * &tail, int element , int d){
    // if list is empty
    Node *newNode = new Node(d);
    if(tail == NULL){
        cout<<"Inserting "<<d<<" in the list "<<endl;
        tail = newNode;
        newNode ->next = newNode;
    }else{
        // if list is not empty
       cout<<"Inserting "<<d<<" after "<<element<<" in the list"<<endl;
       Node * curr = tail;
       while(curr->data != element){
        curr = curr ->next;
       }
       newNode->next = curr->next;
       curr->next = newNode;
    }
}
void print(Node* &head){
    //never want to change head
    Node *temp = head;
    cout<<"Printing Circular linked list: ";
    do{
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
    while(temp != head);
    cout<<endl;
}
int main(){
    //dynamic allocation for node
    Node *head = NULL;
    Node *tail = NULL;
    insertNode(tail,0,5);
    //initialize head;
    head = tail;
    print(head);
    insertNode(tail,5,6);
    print(head);
    insertNode(tail,6,8);
    print(head);
    insertNode(tail,8,2);
    print(head);
    insertNode(tail,2,51);
    print(head);
return 0;
}