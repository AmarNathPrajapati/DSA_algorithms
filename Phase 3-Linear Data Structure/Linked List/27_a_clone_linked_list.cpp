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
        //using map to map original to clone
        unordered_map<Node*, Node*> mapping;
        Node* oNode = head;
        Node* cNode = cloneHead;
        while(oNode != NULL && cNode != 0){
            mapping[oNode] = cNode;
            oNode = oNode->next;
            cNode = cNode->next;
        }
        //linking random node;
        oNode = head;
        cNode = cloneHead;
        while(oNode != NULL){
            cNode->arb = mapping[oNode->arb];
            oNode = oNode->next;
            cNode = cNode->next;
        }
        return cloneHead;
    }