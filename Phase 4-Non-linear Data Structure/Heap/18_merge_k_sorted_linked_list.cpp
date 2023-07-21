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
    Node<int>* head = NULL;//creating the new linked list.
    Node<int>* tail = NULL;// head and tail of the linked list.
    while(minHeap.size()>0){
        Node<int> *temp = minHeap.top();//ye jo temp hai.ye each linked list ka head hai.
        minHeap.pop();
        if(head==NULL){
            head = temp;
            tail = temp;
        }else{
            tail->next = temp;
            tail = temp;
        }
        if(temp->next != NULL){//if the next element is present in the linked list.
            minHeap.push(temp->next);//min heap me dalane se minimum wala upper he hogo which help to get sorted array.
        }
    }
    return head;
}
