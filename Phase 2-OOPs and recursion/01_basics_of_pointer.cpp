#include<bits/stdc++.h>
using namespace std;

int main(){
    //get the address of a variable
    int n = 5;
    cout<<"value of n is: "<<n<<endl;
    cout<<"address of n is: "<<&n<<endl;
    //how to store address
    // int address = &p;//err
    //use pointer
    //How to initialize a pointer
    int *ptr = &n;//1 method
    cout<<"address of n is: "<<ptr<<endl;
    //access thru pointer
    cout<<"value of n is: "<<*ptr<<endl;
    // int *ptr2;//dangerous
    int *ptr2=0;
    ptr2 = &n;//2 method
    cout<<"address of ptr2: "<<ptr2<<endl;
    cout<<"value at ptr2: "<<*ptr2<<endl;
    //reference 
    cout<<"understanding deferencing..."<<endl;
    cout<<"value of n is: "<<n<<endl;
    (*ptr)++;//parenthesis lagaye safe rahe
    cout<<"value of n after increment after deferencing pointer: "<<n<<endl;
    cout<<"size of pointer..."<<endl;
    char c = 'a';
    char *cptr = &c;
    cout<<"size of char pointer: "<<sizeof(cptr)<<endl;
    cout<<"size of int pointer: "<<sizeof(ptr)<<endl;
    //copy of pointer
    int *copyPtr = ptr;
    cout<<"address of ptr: "<<ptr<<endl;
    cout<<"address of copyPtr: "<<copyPtr<<endl;
    cout<<"value at ptr: "<<*ptr<<endl;
    cout<<"value at copyPtr: "<<*copyPtr<<endl;
    //Pointer Arithmatic(increment or decrement by size of pointer)
    cout<<"pointer Arithmetic..."<<endl;
    cout<<"value of ptr: "<<ptr<<endl;
    ptr = ptr + 1;
    cout<<"increment the ptr: "<<ptr<<endl;
    cout<<"value at ptr+1: "<<*ptr<<endl;
    cout<<"decrement the ptr: "<<--ptr<<endl;
    cout<<"value at ptr-1: "<<*ptr<<endl;





return 0;
}