class Deque
{
public:
    // Initialize your data structure.
    int *arr;
    int f;
    int r; 
    int size;
    Deque(int n)
    {
        // Write your code here.
        size = n;
        arr = new int[size];
        f = -1;
        r = -1;
    }

    // Pushes 'X' in the front of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushFront(int x)
    {
        // Write your code here.
        if((f==0 && r == size-1)|| (f !=0 && r==(f-1)%(size-1))){
            return false;
        }//first push
        else if(f==-1){
            f=0;
            r=0;
        }//if front at start extreme
        else if(f==0 && r != size-1){
            f = size-1;
        }else{
            f--;
        }
        arr[f] = x;
        return true;
    }

    // Pushes 'X' in the back of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushRear(int x)
    {
        // Write your code here.
        //check full
        if((f==0 && r == size-1)|| (f !=0 && r==(f-1)%(size-1))){
            return false;
        }//first push 
        else if(f==-1){
            f = 0;
            r = 0;
        }//rear at last index
        else if(r == size-1 && f != 0){
            r = 0;
        }//normal push
        else{
            r++;
        }
        arr[r] = x;
        return true;
    }

    // Pops an element from the front of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popFront()
    {
        // Write your code here.
        if(f==-1){
            return -1;
        }
        int ans = arr[f];
        arr[f] = -1;
        //if only single element
        if(f==r){
            f = -1;
            r = -1;
        }//if front at last
        else if(f == size -1){
            f = 0;
        }//normal pop
        else{
            f++;
        }  
         return ans; 
    }

    // Pops an element from the back of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popRear()
    {
        // Write your code here.
         if(f==-1){
            return -1;
        }
        int ans = arr[r];
        arr[r] = -1;
        //if only single element
        if(f==r){
            f = -1;
            r = -1;
        }//if rear at last exteme
        else if(r == 0 ){
            r = size-1;
        }//normal pop
        else{
            r--;
        }  
         return ans; 
    }

    // Returns the first element of the deque. If the deque is empty, it returns -1.
    int getFront()
    {
        // Write your code here.
        if(f==-1){
            return -1;
        }else{
            return arr[f];
        }
    }

    // Returns the last element of the deque. If the deque is empty, it returns -1.
    int getRear()
    {
        // Write your code here.
        if(f==-1){
            return -1;
        }else{
            return arr[r];
        }
    }

    // Returns true if the deque is empty. Otherwise returns false.
    bool isEmpty()
    {
        // Write your code here.
        if(f==-1){
            return true;
        }else{
            return false;
        }
    }

    // Returns true if the deque is full. Otherwise returns false.
    bool isFull()
    {
        // Write your code here.
        if((f==0 && r == size-1)|| (f !=0 && r==(f-1)%(size-1))){
            return true;
        }else{
            return false;
        }
    }
};