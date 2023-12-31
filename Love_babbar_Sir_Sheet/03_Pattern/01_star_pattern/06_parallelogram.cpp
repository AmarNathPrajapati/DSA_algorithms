#include<iostream>
using namespace std;

int main(){
    int n = 4;
    int m = 6;
    for(int i = 0; i<n; i++){
        for(int k = 0; k<=i; k++){
            cout<<" ";
        }
        for(int j = 0; j<m; j++){
            cout<<"*";
        }
        cout<<endl;
    }
return 0;
}