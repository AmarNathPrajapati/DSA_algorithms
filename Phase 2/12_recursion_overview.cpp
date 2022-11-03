#include<iostream>
using namespace std;
int factorial(int n){
    //base condition
    if(n==0){
        return 1;
    }
    //recurrence relation
    int chhoti = factorial(n-1);
    int badi = n*chhoti;
    return badi;
}
int main(){
    //program for factorial a number recursively
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int ans = factorial(n);
    cout<<"factorial of given number: "<<ans;
return 0;
}