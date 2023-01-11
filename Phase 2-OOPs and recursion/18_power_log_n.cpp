#include<iostream>
using namespace std;
int power(int x, int n){
    //base condition
    if(n==0){
        return 1;
    }
    if(n==1){
        return x;
    }
    //processing
    int ans = power(x,n/2);
    //recurrence relation
    if(n&1){
        return ans*ans*x;
    }else{
        return ans*ans;
    }
}
int main(){
    int x , n;
    cout<<"Enter the value of x and n:"<<endl;
    cin>>x>>n;
    cout<<x<<" to the power "<<n<<" is:"<<power(x,n);
return 0;
}   