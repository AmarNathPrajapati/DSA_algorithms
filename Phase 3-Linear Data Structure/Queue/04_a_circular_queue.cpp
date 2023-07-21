class MyCircularQueue {
public:
    int f;
    int r;
    int *arr;
    int size;
    MyCircularQueue(int k) {
        size = k;
        f = -1;
        r = -1;
        arr = new int[k];
    }
    
    bool enQueue(int value) {
        //full
        if(isFull()){
            return false;
        }
        //first
        else if(f==-1 && r== -1){
            f = 0;
            r = 0;
        }
        //normal
        else{
             r = (r + 1) % size;
        }
        arr[r] = value;
        return true;
    }
    
    bool deQueue() {
        //empty
        if(isEmpty()){
            return false;
        }
        //single element
        if(f==r){
            f = -1;
            r = -1;
        }
        //f at first
        else{
            f= (f + 1) % size;
        }
        return true;
    }
    
    int Front() {
        if(isEmpty()){
            return -1;
        }else{
            return arr[f];
        }
    }
    
    int Rear() {
        if(isEmpty()){
            return -1;
        }else{
            return arr[r];
        }
        
    }
    
    bool isEmpty() {
        if(f==-1 && r== -1){
            return true;
        }else{
            return false;
        }
    }
    
    bool isFull() {
        if((r + 1) % size == f){
            return true;
        }else{
            return false;
        }
    }
};
