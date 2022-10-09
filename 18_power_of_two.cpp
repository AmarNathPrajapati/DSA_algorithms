#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int count = 0;
    while (n!=0)
    {
        int bit = n&1;
        if(bit == 1){
            count++;// No of set bits
        }
        n=n>>1;
    }
    if(count==1){
        cout<<"given number can be explain in 2 to the power x"<<endl;
    }else{
        cout<<"given number can not be explain in 2 to the power x"<<endl;
    }
return 0;
}