#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue <int> q;
    q.push(12);
    q.push(2);
    q.push(1);
    q.push(14);
    q.push(15);
    int size = q.size();
    for (int i = 0; i < size; i++)
    {
        cout<<"q.front(): "<<q.front()<<endl;
        q.pop();
    }
    if(q.empty()){
        cout<<"Queue is empty"<<endl;
    }else{
        cout<<"Queue is not empty"<<endl;
    }
return 0;
}