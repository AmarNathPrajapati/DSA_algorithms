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
int main(){
    //dynamic allocation for node
    Node *n1 = new Node(5);
    Node *head = n1;// head for tracking the linked list.
    Node *tail = n1;
    print(head);
    reversePrint(head);
    cout<<"Lenght of list is: "<< lenghtList(head);
    cout<<endl;
return 0;
}