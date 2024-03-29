class ZeroEvenOdd {
private:
    mutex m;
    condition_variable cv;
    int turn;
    int n;
    int i;
public:
    ZeroEvenOdd(int n) {
        this->n = n;
        turn = 0;
        i = 1;
    }

    // printNumber(x) outputs "x", where x is an integer.
    void zero(function<void(int)> printNumber) {
        while(i<=n){
            unique_lock<mutex>lock(m);
            while(turn != 0 && i<=n){
                cv.wait(lock);
            }
            if(i>n){
                break;
            }
            printNumber(0);
            if(i%2==0){
                turn = 2;
            }else{
                turn = 1;
            }
            cv.notify_all();
        }
    }

    void even(function<void(int)> printNumber) {
        while(i<=n){
            unique_lock<mutex>lock(m);
            while(turn != 2 && i<=n){
                cv.wait(lock);
            }
            if(i>n){
                break;
            }
            printNumber(i++);
            turn = 0;
            cv.notify_all();
        }
    }

    void odd(function<void(int)> printNumber) {
        while(i<=n){
            unique_lock<mutex>lock(m);
            while(turn != 1 && i<=n){
                cv.wait(lock);
            }
            if(i>n){
                break;
            }
            printNumber(i++);
            turn = 0;
            cv.notify_all();
        }
    }
};