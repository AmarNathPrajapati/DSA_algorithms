class Queue {
    int *arr;
    int f;
    int r;
    int size;
public:
    Queue() {
        // Implement the Constructor
        size = 10000;
        arr = new int[size];
        f = 0;
        r = 0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        if(f==r){
            return true;
        }else{
            return false;
        }
    }

    void enqueue(int data) {
        // Implement the enqueue() function
        //check full or not
        if(f==0 && r==size){
            cout<<"Queue is full"<<endl;
        }else{
            arr[r] = data;
            r++;
        }
    }

    int dequeue() {
        // Implement the dequeue() function
        if(f==r){
            return -1;
        }else{
            int ans = arr[f];
            arr[f] = -1;
            f++;
            if(f==r){
                f = 0;
                r = 0;
            }
            return ans;
        }
    }

    int front() {
        // Implement the front() function
        if(f==r){
            return -1;
        }else{
            return arr[f];
        }
    }
};