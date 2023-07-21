// #include <bits/stdc++.h> 
// /************************************************************

//     Following is the linked list node structure:
    
//     template <typename T>
//     class Node {
//         public:
//         T data;
//         Node* next;

//         Node(T data) {
//             next = NULL;
//             this->data = data;
//         }
//     };

// ************************************************************/


void reverse(Node<int>* &root){
    Node<int>* curr = root;
    Node<int>* prev = NULL;
    Node<int>*adv = NULL;
    while(curr != NULL){
        adv = curr->next;
        curr->next = prev;
        prev = curr;
        curr = adv;
    }
    root = prev; 
}

void add(Node<int>* &root, Node<int>* &tail, int x){
    Node<int> *p = new Node<int>(x);
    if(root == NULL){
        root = p;
        tail = p;
        return;
    }
    else{
        tail->next = p;
        tail = p;
    }
}

Node<int>* addTwoLists(Node<int>* first, Node<int>* second) {
    // Using Reverse
    reverse(first);
    reverse(second);
    Node<int>* curr1 = first;
    Node<int>* curr2 = second;
    Node<int>* root = NULL;
    Node<int>* tail = NULL;
    int carry = 0;
    while(curr1 != NULL && curr2 != NULL){
        int num = carry + curr1->data + curr2->data;
        carry = num / 10;
        num = num % 10;
        add(root, tail, num);
        curr1 = curr1->next;
        curr2 = curr2->next;
    }
    while(curr1 != NULL){
        int num = carry + curr1->data;
        carry = num / 10;
        num = num % 10;
        add(root, tail, num);
        curr1 = curr1->next;
    }
    while(curr2 != NULL){
        int num = carry + curr2->data;
        carry = num / 10;
        num = num % 10;
        add(root, tail, num);
        curr2 = curr2->next;
    }
    if(carry != 0){
        add(root, tail, carry);
    }
    reverse(first);
    reverse(second);
    reverse(root);
    return root;
}