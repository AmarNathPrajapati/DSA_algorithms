#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int a1,a2,a3;
    cin>>a1>>a2>>a3;
    int ans1 = a1+a2;
    int ans2 = a1+a3;
    int ans3 = a2+a3;
    if((ans1>0 && ans1 %2 ==0)||(ans2>0 && ans2%2 ==0)||(ans3>0 && ans3%2 ==0)){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}