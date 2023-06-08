#include<bits/stdc++.h>
using namespace std;

int main(){
    char carr[5] = "avac"  ;
    char *cptr = &carr[0];
    cout<<"carr: "<<carr<<endl;//no address give entire string
    cout<<"cptr: "<<cptr<<endl;//no address give entire string
    cout<<"Hence: cout implementation is different for int and char pointer"<<endl;
    char ch = 'z';
    cptr = &ch;
    cout<<"cptr without null asigned: "<<cptr<<endl;//zavac
    char *cptr2=&ch;
    cout<<"cptr2: "<<cptr2<<endl;
    //why not?
    char *c = "abcd";//dangerous, can read read only memory also
    cout<<"c: "<<c<<endl;
return 0;
}   