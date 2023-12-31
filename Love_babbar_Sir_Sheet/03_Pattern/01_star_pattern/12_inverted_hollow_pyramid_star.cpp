#include<iostream>
using namespace std;

int main(){
    int n = 8;
    for(int i = 0; i<n; i++){
        for(int k = 0; k<i;k++){
            cout<<" ";
        }
        for(int j = 0; j<n-i; j++){
            if(i==0 || i==n-1 || j==0){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        for(int x = 0; x<n-i-1; x++){
            if(i==0 || i==n-1 || x==n-i-2){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
return 0;
}