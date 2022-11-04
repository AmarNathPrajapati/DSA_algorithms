#include<iostream>
using namespace std;
/*
    problem: say digits
    approach:
    find digit
    print digit
*/
void sayDigit(string arr[] , int n){
    //base conditions
    if(n==0){
        return;
    }
    //412
    int digit = n%10;//2
    n = n/10;
    sayDigit(arr,n);
    cout<<arr[digit-1]<<" ";

}
int main(){
    int n;
    cout<<"Enter the digit: "<<endl;
    cin>>n;
    string arr[] = {
        "one", "two","three","four","five","six","seven","eight","nine"
    };
    sayDigit(arr,n);
return 0;
}