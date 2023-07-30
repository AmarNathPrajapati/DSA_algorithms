#include<bits/stdc++.h>
using namespace std;
int powNum(int num, int exp){
    int ans = 1;
    while (exp>0)
    {
        if(exp&1){
            ans = ans * num;
        }
        num = num * num;//4 //16
        exp = exp >>1;
    }
    return ans;
    
}
int main(){
    cout<<"Enter the base number and exponent"<<endl;
    int num;
    int exp;
    cin>>num>>exp;
    //direct method
    // int ans = pow(num,exp);
    // cout<<ans<<endl;
    int ans = powNum(num,exp);
    cout<<"Answer is "<<ans;
return 0;
}