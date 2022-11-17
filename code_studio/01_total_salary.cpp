#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    //Write your code here
    double basic;
    cin>>basic;
    double hra = basic * 0.2;
    double da = basic * 0.5;
    double pf = basic * 0.11;
    char grade;
    cin>>grade;
    double allow;
    if(grade == 'A'){
        allow = 1700;
    }else if(grade =='B'){
        allow = 1500;
    }else{
        allow = 1300;
    }
    long double salary = basic + hra + da + allow - pf;
    double roundVal = salary - int(salary);
    
    if(roundVal>=0.5){
        salary = int(salary) + 1;
    }else{
        salary = int(salary);
    }
    cout<<salary<<endl;
    return 0;
}