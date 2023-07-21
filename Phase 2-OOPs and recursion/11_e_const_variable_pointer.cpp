#include<iostream>
using namespace std;

const int global = 10;

void a(){
    // global = global + 10;//error
}
int main(){
    // const int y;//error
    const int i = 5;
    cout<<"constant i: "<<i<<endl;
    cout<<"try to change..."<<endl;
    // i = i+5;//error
    // const int i = 10;//error
    cout<<"redeclare i: "<<i<<endl;
    int j = 10;
    const int *ptr = &j;
    cout<<"const ptr: "<<ptr<<endl;
    cout<<"const*ptr: "<<*ptr<<endl;
    cout<<"try to change..."<<endl;
    ptr = ptr + 1;
    // *ptr = *ptr + 10;//error
    cout<<"const ptr: "<<ptr<<endl;
    cout<<"const*ptr: "<<*ptr<<endl;
    

return 0;
}