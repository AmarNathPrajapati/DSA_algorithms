#include<bits/stdc++.h>
using namespace std;
void update(int chandan){
    cout<<"updating without reference variable..."<<endl;
    chandan = chandan + 12010000;
}
void updateR(int &chandan){
    cout<<"updating with reference variable..."<<endl;
    chandan = chandan + 12010000;
}
//bad pratice
int& updatei(int &n){
    n = n+10;
    int &ans = n;//yaha local variable hai,iski memory location kyo share kar rahe ho
    return ans;
}//block ke baad ans ka scope khatm
int* updateip(int *n){
    *n = *n+10;
    int *ans = n;//yaha local variable hai,iski memory location kyo share kar rahe ho
    return ans;
}//block ke baad ans ka scope khatm
int main(){
    int amarnath = 1051;
    int &chandan = amarnath;
    cout<<"Before updating..."<<endl;
    cout<<"amarnath: "<<amarnath<<endl;
    cout<<"chandan: "<<chandan<<endl;
    //same memory but difference name in symbol table
    update(amarnath);
    cout<<"After updating..."<<endl;
    cout<<"amarnath: "<<amarnath<<endl;
    cout<<"chandan: "<<chandan<<endl;
    updateR(amarnath);
    cout<<"After updating..."<<endl;
    cout<<"amarnath: "<<amarnath<<endl;
    cout<<"chandan: "<<chandan<<endl;

    //bad practice with reference variable
    int i = 5;
    cout<<"i: "<<i<<endl;
    int a = updatei(i);
    cout<<"a: "<<a<<endl;
    //bad practice with pointer
    int i2 = 5;
    cout<<"i2: "<<i2<<endl;
    int *a2 = updateip(&i2);
    cout<<"*a2: "<<*a2<<endl;
return 0;
}