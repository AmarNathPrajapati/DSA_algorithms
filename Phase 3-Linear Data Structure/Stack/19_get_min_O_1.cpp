#include<stack>
class SpecialStack {
    // Define the data members.

    /*----------------- Public Functions of SpecialStack -----------------*/
    stack<int>s;
    int mini;
    public:
    
    void push(int data) {
        // Implement the push() function.
        if(s.empty()){
            s.push(data);
            mini = data;//normal push and update the mini variable
        }else{
            if(data<mini){//if comming data is less than mini it means there is new mini is coming.
                int val = 2*data - mini;
                s.push(val);
                mini = data;//mini is comming data.
            }else{//if data is greater than normal push (no need of updation of mini)
                s.push(data);
            }
        }
    }

    int pop() {
        // Implement the pop() function.
        if(s.empty()){
            return -1;
        }
        int curr = s.top();
        s.pop();
        
        if(curr>mini){//agar ham minimum wale ko nahi nikal rahe hai, then no need to update mini.
            return curr;
        }else{//update mini.
            int prevMini =mini;//basically this is the minimum element which is going to pop
            //we have to get next minimum element
            int val = 2*mini - curr;//calculating previous mini after poping the minimum element.
            //updating the minimum element
            mini = val;
            return prevMini;
        }
       
    }

    int top() {
        // Implement the top() function.
        if(s.empty()){
            return -1;
        }
        int curr = s.top();
        if(curr<mini){
             return mini;
        }else{
            return curr;
        }
    }

    bool isEmpty() {
        // Implement the isEmpty() function.
        return s.empty();
    }

    int getMin() {
        // Implement the getMin() function.
        if(s.empty()){
            return -1;
        }
        return mini;
    }  
};