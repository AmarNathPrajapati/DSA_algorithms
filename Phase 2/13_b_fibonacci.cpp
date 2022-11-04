#include<iostream>
using namespace std;
int fibonacci(int n){
    //base case
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    //recurrence relation
    int ans = fibonacci(n-1) + fibonacci(n-2);
    return ans;

}
int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    cout<<n<<"th fibonacci number is: "<<fibonacci(n)<<endl;

return 0;
}