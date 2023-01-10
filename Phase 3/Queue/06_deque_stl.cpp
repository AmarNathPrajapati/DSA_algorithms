#include<iostream>
#include<stack>
using namespace std;

int main(){
    deque<int> dq;
    dq.push_back(1);
    dq.push_front(2);
    dq.push_back(3);
    dq.push_front(4);
    dq.push_back(5);
    dq.push_front(6);
    dq.push_back(7);
    dq.push_front(8);
    int size = dq.size();
    // for (int i = 0; i < size; i++)
    // {
    //     cout<<"dq.back(): "<<dq.back()<<endl;
    //     dq.pop_back();
    // }
    for (int i = 0; i < size; i++)
    {
        if(dq.empty()){
            cout<<"Queue is empty"<<endl;
            break;
        }
        cout<<"dq.front(): "<<dq.front()<<endl;
        dq.pop_front();
    }
    
return 0;
}