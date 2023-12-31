#include<iostream>
using namespace std;

int main(){
    int n = 4;
    int count = 1;
    for(int i = 0; i<n; i++){
        int temp = count;
        for(int j = 0; j<=i; j++){
            cout<<temp;
            temp--;
        }
        count = count+i+2;
        cout<<endl;
    }
return 0;
}