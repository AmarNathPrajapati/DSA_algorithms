#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int i = 0;
    int answer = 0;
    while(n!= 0){
        int bit = n & 1;
        answer = (bit * pow(10,i)) + answer;
        n = n>>1;
        i++;
    }
    cout<<"Binary Number : "<<answer;
return 0;
}