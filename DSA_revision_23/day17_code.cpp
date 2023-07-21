//implement a circular linked list
#include<iostream>
using namespace std;
class node{
    public:
        int data;
        node* next;
        //constructor
        node(int val){
            this->data = val;
            this->next = NULL;
        }
};
//insertion at end
void insertionAtEnd(node*&head, node* &tail,int data){
    node *newNode = new node(data);
    tail->next = newNode;
    tail = newNode;
    tail ->next = head;
}
//traversal of circular linked list
void traversal(node*head){
    node *temp = head;
    do{
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    while(temp != head);
}
int main(){
    node* root= new node(5);
    node* head = root;
    node* tail = root;
    head = tail;
    //insertion at end
    insertionAtEnd(head,tail,10);
    insertionAtEnd(head,tail,15);
    insertionAtEnd(head,tail,19);
    insertionAtEnd(head,tail,50);
    //traversal 
    traversal(head);

return 0;
}