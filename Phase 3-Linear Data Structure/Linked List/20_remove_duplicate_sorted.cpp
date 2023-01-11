// /************************************************************

//     Following is the linked list node structure.
    
//     class Node 
//     {
//         public:
//         int data;
//         Node* next;

//         Node(int data) 
//         {
//             this->data = data;
//             this->next = NULL;
//         }
//     };
    
// ************************************************************/

// Node * uniqueSortedList(Node * head) {
//     // Write your code here.
//     if(head == NULL){
//         return NULL;
//     }
//     Node * curr = head;
//     while(curr->next != NULL){
//         if(curr->data==curr->next->data){
//             Node *to_connect = curr->next->next;
//             Node *to_delete = curr->next;
//             delete(to_delete);
//             curr->next = to_connect;
//         }else{
//             curr = curr->next;
//         }
//     }
//     return head;
// }