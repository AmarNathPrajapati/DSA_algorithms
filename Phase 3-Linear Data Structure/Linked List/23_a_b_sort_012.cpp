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
Node* sortList(Node *head)
{
    cout<<"Sorting 0s, 1s, 2s using Find and replace method"<<endl;
    // Write your code here.
    int zeroCount = 0;
    int oneCount = 0;
    int twoCount = 0;
    Node * curr = head;
    while(curr != NULL){
        if(curr->data==0){
            zeroCount++;
        }else if(curr->data == 1){
            oneCount++;
        }else if(curr->data == 2){
            twoCount++;
        }
        curr = curr->next;
    }
    Node *newCurr = head;
    while(newCurr != NULL){
        if(zeroCount){
            newCurr->data = 0;
            zeroCount--;
        }else if(oneCount){
            newCurr->data = 1;
            oneCount--;
        }else if(twoCount){
            newCurr->data = 2;
            twoCount--;
        }
        newCurr = newCurr->next;
    }
    return head;
}
void insertAtTail(Node* &tail, Node* &curr){
    tail->next = curr;
    tail = curr;
}
Node * sortListChanginLinks(Node *head)
{
    cout<<"Sorting 0s, 1s and 2s using changing links method"<<endl;
    Node* zeroHead = new Node(-1);
    Node* zeroTail = zeroHead;
    Node* oneHead = new Node(-1);
    Node* oneTail = oneHead;
    Node* twoHead = new Node(-1);
    Node* twoTail = twoHead;

    Node *curr = head;
    while (curr != NULL)
    {
        if(curr->data ==0){
            insertAtTail(zeroTail,curr);
        }else if(curr->data == 1){
            insertAtTail(oneTail,curr);
        }else if(curr->data == 2){
            insertAtTail(twoTail,curr);
        }
        curr = curr->next;
    }
    if(oneHead->next != NULL){
        zeroTail->next = oneHead->next;
    }else{
        zeroTail->next = twoHead->next;
    }
    // zeroTail->next = oneHead->next;
    oneTail->next = twoHead->next;
    twoTail->next = NULL;
    head = zeroHead->next;
    delete(zeroHead);
    delete(oneHead);
    delete(twoHead);
    return head;
}
int main(){
    //dynamic allocation for node
    Node *n1 = new Node(1);
    Node *head = n1;// head for tracking the linked list.
    Node *tail = n1;//tail make insertion easy at end.
    print(head);
    insertionAtFirst(head,0);
    print(head);
    insertionAtFirst(head,2);
    print(head);
    insertionAtFirst(head,2);
    print(head);
    insertionAtEnd(tail,1);
    print(head);
    head = sortList(head);
    print(head);
    head = sortListChanginLinks(head);
    print(head);
return 0;
}