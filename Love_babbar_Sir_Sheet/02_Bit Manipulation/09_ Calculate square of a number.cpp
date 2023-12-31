#include <bits/stdc++.h> 
int calculateSquare(int num)
{
    //    Write your code here.
    num=abs(num);
    int ans = 0;
    for(int i = 0; i<num; i++){
        ans +=num;
    }
    return ans;
}