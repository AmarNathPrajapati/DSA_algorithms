class Semaphore{
    public:
        mutex m;
        condition_variable cv;
        int count;
        Semaphore(){}
        Semaphore(int c):count(c){};
        void setCount(int a){
            count = a;
        }
        inline void signal(){
            unique_lock<mutex>lock(m);
            count ++;
            if(count<=0){
                cv.notify_one();
            }
        }
        inline void wait(){
            unique_lock<mutex>lock(m);
            count--;
            while(count<0){
                cv.wait(lock);
            }
        }
};
class DiningPhilosophers {
public:
    Semaphore fork[5];//philosopher id 0 to 4. all are binary semaphore
    mutex m,l;
    DiningPhilosophers() {
        for(int i = 0; i<5; i++){
            fork[i].setCount(1);
        }
    }

    void wantsToEat(int philosopher,
                    function<void()> pickLeftFork,
                    function<void()> pickRightFork,
                    function<void()> eat,
                    function<void()> putLeftFork,
                    function<void()> putRightFork) {
                        //making picking critical section
                        {
                        lock_guard<mutex>lock(m);
                        fork[(philosopher+1)%5].wait();//picking left and right forks.
                        fork[philosopher].wait();
                        }
    //pick both simultaneously, if left nahi mil paya then he can't pick right fork;
    pickLeftFork();
    pickRightFork();
    eat();//when left and right fork will be picked then only we permit to eat.
    putLeftFork();//at this moment left fork will be free.
    fork[(philosopher+1)%5].signal();
    putRightFork();//at this moment right fork will be free.
    fork[philosopher].signal();//basically here ham ek philosopher ko eating state par le ja rahe hai and again usko waiting state par la rahe hai.
    }
};