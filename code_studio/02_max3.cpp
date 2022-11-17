#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    //Write your code here
    int a,b,c;
    cin>>a>>b>>c;
//     int maxi = INT_MIN;
//     if(a>b){
//         maxi = a;
//     }else{
//         maxi = b;
//     }
//     if(maxi>c){
//         return maxi;
//     }else{
//         return c;
//     }
    if(a>b && a>c){
        return a;
    }
    if(b>a && b>c){
        return b;
    }
    if(c>a && c>b){
        return c;
    }
    return 0;
}