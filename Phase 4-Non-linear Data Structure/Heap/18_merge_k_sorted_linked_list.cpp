#include<queue>
/************************************************************

    Following is the linked list node structure

    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

    //s1:compare class
class compare{
    public:
        bool operator()(Node<int>*a, Node<int>*b){
            return a->data > b->data;
        }
};
Node<int>* mergeKLists(vector<Node<int>*> &listArray)
{
    // Write your code here.

    //s2: create a min heap
    priority_queue< Node<int>*, vector< Node<int>* >, compare> minHeap;
    //s3: push first k(size of vector ) elements in the array
    int k = listArray.size();
    if(k==0){
        return NULL;
    }
    for(int i = 0; i<k; i++){
        if(listArray[i] != NULL){
            minHeap.push(listArray[i]);
        }
    }
    //s4: if next possible then insert that insert and link
    Node<int>* head = NULL;
    Node<int>* tail = NULL;
    while(minHeap.size()>0){
        Node<int> *temp = minHeap.top();
        minHeap.pop();
        if(head==NULL){
            head = temp;
            tail = temp;
        }else{
            tail->next = temp;
            tail = temp;
        }
        if(temp->next != NULL){
            minHeap.push(temp->next);
        }
    }
    return head;
}
