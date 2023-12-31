#include<iostream>
using namespace std;

int main(){
    int n  = 5;
    int count = (n*(n+1))/2;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n-i; j++){
            cout<<count--;
        }
        cout<<endl;
    }
return 0;
}