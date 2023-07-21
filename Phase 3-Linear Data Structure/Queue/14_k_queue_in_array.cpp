#include <bits/stdc++.h> 
class NQueue{
public:
    // Initialize your data structure.
    int *arr;
    int *f;
    int *r;
    int *next;//
    int freespot;
    NQueue(int n, int s){
        // Write your code here.
        arr = new int[s];
        next = new int[s];
        f = new int[n];
        r = new int[n];
        freespot = 0;
        for(int i = 0; i<n ; i++){
            f[i] = -1;
            r[i] = -1;
        }
        for(int i = 0; i<s; i++){
            next[i] = i+1;
        }
        next[s-1] = -1;//there is no block free after the last block.
    }

    // Enqueues 'X' into the Mth queue. Returns true if it gets pushed into the queue, and false otherwise.
    bool enqueue(int x, int m){
        // Write your code here.
        //find index
        if(freespot == -1){//checking the overflow
            return false;//No freeslot available
        }
        int index = freespot;
        //update freespot
        freespot = next[index];
        //first entry
        if(f[m-1]==-1){//we initialize front and rear with -1, so we have to handle the first entry seperately
            f[m-1]=index;//front will point the currrent index.
        }else{
            next[r[m-1]] = index;//to connect the next element with the previous one.
        }
        //update next
        next[index] = -1;//since we are going to push element in that place so the next index will be -1;//not available.
        r[m-1] = index;//push where rear will point
        arr[index] = x;
        return true;
    }

    // Dequeues top element from Mth queue. Returns -1 if the queue is empty, otherwise returns the popped element.
    int dequeue(int m){
        // Write your code here.
        if(f[m-1]==-1){
            return -1;
        }
        //find index
        int index = f[m-1];
        //update front
        f[m-1] = next[index];
        //update next
        next[index] = freespot;//link by current freespot
        //update freespot
        freespot = index;//update the freespot
        return arr[index];
    }
};