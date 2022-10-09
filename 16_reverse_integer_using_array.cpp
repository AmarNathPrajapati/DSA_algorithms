#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    vector<int> v;
    while (n!=0)
    {
        int digit = n%10;
        v.push_back(digit);
        n = n/10;
    }
    for(int i : v){
        cout<<i;
    }
return 0;
}