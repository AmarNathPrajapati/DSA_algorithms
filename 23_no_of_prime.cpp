#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    if(n<2)
        return false;
    if(n==2 || n==3){
        return true;
    }
    bool prime = false;
    for (int i = 2; i <= n/2; i++)
    {
        if(n%i==0){
            prime = false;
            break;
        }else{
            prime = true;
        }
    }
    return prime;
}
int numberOfPrime(int n){
    int count = 0;
    for (int i = 2; i <= n; i++)
    { 
        if(isPrime(i)){
            count+=1;
        }
    }
    return count;
}
int main(){
    cout<<"Enter the number"<<endl;
    int n;
    cin>>n;
    cout<<"Number of prime number available is "<<numberOfPrime(n)<<endl;
return 0;
}