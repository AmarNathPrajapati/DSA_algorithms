#include<iostream>
using namespace std;

int main(){
    cout<<"Enter The amount"<<endl;
    int amount;//1330
    cin>>amount;
    cout<<"it require "<<amount/100<<" hundred's notes"<<endl;//13
    amount %=100;//a=30
    if(amount/50)
    cout<<"it require "<<amount/50<<" fifty's notes"<<endl;//0
    amount %= 50;//a=30
    if(amount/20)
    cout<<"it require "<<amount/20<<" twenty's notes"<<endl;//1
    amount %= 20;//a=10
    if(amount/10)
    cout<<"it require "<<amount/10<<" ten's notes"<<endl;//1
    amount %= 10;//a=0
    if(amount/5)
    cout<<"it require "<<amount/5<<" five's notes"<<endl;//0
    amount %= 5;//a=30
    if(amount/1)
    cout<<"it require "<<amount/1<<" one's notes"<<endl;//0
    amount %= 5;//a=30
return 0;
}