#include<iostream>
using namespace std;

int main(){
    int n = 4;
    for(int i = 0; i<n; i++){
        for(int k = 0; k<n-i; k++){
            cout<<" ";
        }
        for(int j = 0; j<=i; j++){
            cout<<"*";
        }
        for(int x = 0; x<i; x++){
            cout<<"*";
        }
        cout<<endl;
    }
return 0;
}