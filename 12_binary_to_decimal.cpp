#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int i = 0;
    int answer = 0;
    while(n!= 0){
        int digit = n%10;
        if(digit == 1){
        answer = answer + pow(2,i);
        }
        n = n/10;
        i++;
    }
    cout<<"Decimal are "<<answer<<endl;
return 0;
}