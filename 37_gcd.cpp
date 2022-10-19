#include <bits/stdc++.h>
using namespace std;
/*** method 1 ***/
/*
int gcdNum(int a, int b){
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    while (a!=b)
    {
        if(a>b){
            a=a-b;
        }else{
            b=b-a;
        }
    }
    return a;

}
*/
int gcdNum(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    if (b == 0)
    {
        return a;
    }
    while (a != b)
    {
        if (a == 0)
        {
            return b;
        }
        if (b == 0)
        {
            return a;
        }
        if (a > b)
        {
            a = a % b;
        }
        else
        {
            b = b % a;
        }
    }
    return a;
}
/****** method 2 *****/
int main()
{
    cout << "Enter first number" << endl;
    int num1;
    cin >> num1;
    cout << "Enter second number" << endl;
    int num2;
    cin >> num2;
    // inbuilt gcd function
    //  int ans = gcd(num1,num2);
    //  cout<<ans<<endl;
    int ans = gcdNum(num1, num2);
    cout << " GCD of two number is " << ans << endl;
    return 0;
}