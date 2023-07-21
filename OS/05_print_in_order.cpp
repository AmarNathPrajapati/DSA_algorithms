class Foo {
public:
    mutex m;
    condition_variable cv;
    int turn;

    Foo() {
        turn = 0;//basically it is index of nums
    }

    void first(function<void()> printFirst) {
        
        // printFirst() outputs "first". Do not change or remove this line.
        printFirst();
        turn = 1;
        cv.notify_all();
    }

    void second(function<void()> printSecond) {
        
        // printSecond() outputs "second". Do not change or remove this line.
        unique_lock<mutex>lock(m);
        while(turn != 1){
            cv.wait(lock);
        }
        printSecond();
        turn = 2;
        cv.notify_all();
    }

    void third(function<void()> printThird) {
        
        // printThird() outputs "third". Do not change or remove this line.
        unique_lock<mutex>lock(m);
        while(turn != 2){
            cv.wait(lock);
        }
        printThird();
    }
};