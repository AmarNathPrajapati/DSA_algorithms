#include<iostream>
using namespace std;
//implementing node using the class
class Node{
    public:
        int data;//intializing data of node.
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
int main(){
    //dynamic allocation for node
    Node *n1 = new Node(5);
    Node *head = n1;// head for tracking the linked list.
    print(head);
return 0;
}