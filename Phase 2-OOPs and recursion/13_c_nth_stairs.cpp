#include<iostream>
using namespace std;
int countDistinctWays(int nStairs) {
    //  Write your code here.
    //base case
    if(nStairs<0){
        return 0;
    }
    if(nStairs==0){
        return 1;
    }
    //recurrence relation
    int ans  = countDistinctWays(nStairs-1) + countDistinctWays(nStairs-2);
    return ans;
                                                               
}
int main(){
    //concept like fibonacci series
    cout<<"Enter the nth stairs number: "<<endl;
    int n;
    cin>>n;
    cout<<"The number of different steps for "<<n<<"th stair: "<<countDistinctWays(n);
return 0;
}