#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    cout<<"bits are:"<<endl;
    while(n!= 0){
        int bit = n & 1;
        cout<<bit<<endl;
        n = n>>1;
    }
return 0;
}