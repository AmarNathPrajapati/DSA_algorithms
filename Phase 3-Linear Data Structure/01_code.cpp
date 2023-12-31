#include<iostream>
using namespace std;
int solve(int n){
    int sum = 0;
    while(n){
        int digit = n%10;
        sum = sum + digit;
        n = n/10;
    }
    return sum;
}
int main(){
    cout<<solve(5)<<endl;
return 0;
}