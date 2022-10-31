#include<bits/stdc++.h>
using namespace std;

int main(){
    void *ptr = 0;
    int i = 5;
    ptr =&i;
    cout<<"ptr as integer pointer: "<<ptr<<endl;
    //typecasting in int
    cout<<"*(int*)ptr: "<<*(int*)ptr<<endl;
    char ch = 'a';
    ptr = &ch;
    //typecasting in char
    cout<<"ptr as character pointer: "<<ptr<<endl;
    cout<<"*(char*)ptr: "<<*(char*)ptr<<endl;

return 0;
}   