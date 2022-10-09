#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    cout<<"Digits are:"<<endl;
    while(n!= 0){
        int digit = n%10;
        cout<<digit<<endl;
        n = n/10;
    }
return 0;
}