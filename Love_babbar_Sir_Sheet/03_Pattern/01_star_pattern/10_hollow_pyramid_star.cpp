#include<iostream>
using namespace std;

int main(){
    int n = 5;
    for(int i = 0; i<n; i++){
        for(int k = 0; k<n-i; k++){
            cout<<" ";
        }
        for(int j = 0; j<=i; j++){
            if(i==0||i==n-1||j==0){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        for(int x = 0; x<i; x++){
            if(i==0||i==n-1||x==i-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
return 0;
}