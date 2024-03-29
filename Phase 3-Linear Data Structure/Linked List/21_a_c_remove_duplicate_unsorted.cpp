#include<iostream>
#include<bits/stdc++.h>
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

Node *removeDuplicates(Node *head)
{
    cout<<"removing duplicates"<<endl;
    // Write your code here
    if(head == NULL){
        return NULL;
    }
    Node *curr = head;
    while(curr!=NULL){
        Node*p = curr;
        Node *temp = curr->next;
        while(temp != NULL){
    //     cout<<"curr->data: "<<curr->data<<endl;
    //     cout<<"temp->data: "<<temp->data<<endl;
            if(curr->data == temp -> data){
                Node *to_connect = temp->next;
                Node *to_delete = temp;
                delete(to_delete);
                p->next = to_connect;
                temp = to_connect;
            }else{
                temp = temp->next;
                p = p->next;
            }
        }
        curr=curr->next;
    }
    return head;
}
Node *removeDuplicatesMap(Node *head)
{
    cout<<"removing duplicates"<<endl;
    // Write your code here
    if(head == NULL){
        return NULL;
    }
    map<int,int> m;
    Node *curr = head;
    m[curr->data] = 1;
    Node *p = curr;
    Node *q = curr->next;
    while(q!=NULL){
        if(m[q->data]){
            p ->next = q->next;
            delete(q);
        }else{
            m[q->data]=1;
            p = q;
        }
        q = p->next;
    }
    return head;
}

int main(){
    //dynamic allocation for node
    Node *n1 = new Node(5);
    Node *head = n1;// head for tracking the linked list.
    Node *tail = n1;//tail make insertion easy at end.
    print(head);
    insertionAtFirst(head,3);
    print(head);
    insertionAtFirst(head,5);
    print(head);
    insertionAtFirst(head,1);
    print(head);
    insertionAtEnd(tail,6);
    print(head);
    insertionAtEnd(tail,3);
    print(head);
    // head = removeDuplicates(head);
    // print(head);
    head = removeDuplicatesMap(head);
    print(head);
return 0;
}