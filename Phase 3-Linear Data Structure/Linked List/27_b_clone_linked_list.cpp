 private:
    void insertAtTail(Node* &head, Node* &tail,int val){
        Node* newNode = new Node(val);
        if(head==NULL){
            head = newNode;
            tail = newNode;
            return;
        }else{
            tail->next = newNode;
            tail = newNode;
        }
    }
    public:
    Node *copyList(Node *head)
    {
        //Write your code here
        //creating a clone using next pointer
        Node* cloneHead = NULL;
        Node* cloneTail = NULL;
        Node* temp = head;
        while(temp != NULL){
            insertAtTail(cloneHead,cloneTail,temp->data);
            temp = temp->next;
        }
       //inserting clone node between original node;
        Node* oNode = head;
        Node* cNode = cloneHead;
        while(oNode != NULL && cNode != NULL){
           Node* next1 =oNode->next;
           oNode->next = cNode;
           oNode = next1;
           next1 = cNode ->next;
           cNode ->next = oNode;
           cNode = next1;
        }
        //copy random pointer
        temp = head;
        while(temp != NULL){
            if(temp->next != NULL){
               temp->next->arb=temp->arb?temp->arb->next:temp->arb;
            }
            temp = temp->next->next;
        }
        //reverting the linked list
        oNode = head;
        cNode = cloneHead;
        while(oNode != NULL && cNode != NULL){
            oNode->next = cNode -> next;
            oNode = oNode ->next;
            
            if(oNode != NULL){
                cNode->next = oNode->next;
                cNode = cNode->next;
            }
        }
        return cloneHead;