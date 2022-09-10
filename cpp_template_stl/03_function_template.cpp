#include<iostream>
using namespace std;
template <class T1, class T2>
void add(T1 a, T2 b){
    cout<<a+b<<endl;
}
void add(int a , double b){
    cout<<b/a<<endl;
}
int main(){
    add(5,15.5);
    add(5,15.5);//exact match have highter precedence
return 0;
}