class FooBar {
private:
    int n;
    std::mutex m;
    std::condition_variable cv;
    bool turn;
public:
    FooBar(int n) {
        this->n = n;
        turn = 0;
    }

    void foo(function<void()> printFoo) {
        
        for (int i = 0; i < n; i++) {
            //locking and making the area critical section
            std::unique_lock<std::mutex>lock(m);
            //lock the area when turn == 1,because we want to print the foo first.
            while(turn==1){
                cv.wait(lock);//unlocking the locks
            }
        	printFoo();
            turn = 1;
            cv.notify_all();//notify so that all thread check the loop again.
        }
    }

    void bar(function<void()> printBar) {
        
        for (int i = 0; i < n; i++) {
            std::unique_lock<std::mutex>lock(m);
        	// printBar() outputs "bar". Do not change or remove this line.
            while(turn == 0){
                cv.wait(lock);
            }
        	printBar();
            turn = 0;
            cv.notify_all();
        }
    }
};