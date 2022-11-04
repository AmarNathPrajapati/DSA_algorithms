#include<iostream>
using namespace std;
int rec_pow(int x, int n){
    //base condtion
    if(n==0){
        return 1;
    }
    //reucrrence relations
    int ans = x * rec_pow(x,n-1);
    return ans;
}
int main(){
    cout<<"Enter the number and power: "<<endl;
    int x , n;
    cin>>x>>n;
    cout<<x<< " to the power "<< n <<" is : "<<rec_pow(x,n)<<endl;
return 0;
}   