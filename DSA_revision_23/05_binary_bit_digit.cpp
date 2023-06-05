#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    
//1. Decimal to binary
    // int ans = 0;
    // int i = 0;
    // while(n){
    //     int bit = n & 1;
    //     ans = ans + pow(10,i)*bit;
    //     n=n>>1;
    //     i++;
    // }
    // cout<<"Decimal to binary... "<<endl;
    // cout<<ans<<endl;

//2. Binary to decimal
    // int ans = 0;
    // int i = 0;
    // while(n){
    //     int digit = n % 10;
    //     ans = ans + pow(2,i)*digit;
    //     n=n/10;
    //     i++;
    // }
    // cout<<"Binary to Decimal... "<<endl;
    // cout<<ans<<endl;

//3. Reverse an Integer
    // int ans = 0;
    // while(n){
    //     int digit = n % 10;
    //     ans = ans*10 + digit;
    //     n=n/10;
    // }
    // cout<<"After a reverse... "<<endl;
    // cout<<ans<<endl;

//4. Find the complement of the base 10 number
    // int mask = 0;
    // int temp = n;
    // while(n){
    //     n = n>>1;
    //     mask = mask | 1;
    //     mask = mask<<1;
    // }
    // mask = mask>>1;
    // cout<<"mask: "<<mask<<endl;
    // int ans = (~temp)&(mask);
    // cout<<"The complement of base 10 is..."<<endl;
    // cout<<ans<<endl;

//5. The concept of the set bit and return true if the number can be representea as power of the 2
    int count = 0;
    while (n)
    {
        int bit = n & 1;
        if(bit==1){
            count++;//return the number of set bits
        }
        n = n>>1;
    }
    if(count==1){
        cout<<"True"<<endl;
    }else{
        cout<<"False"<<endl;
    }
    
return 0;
}