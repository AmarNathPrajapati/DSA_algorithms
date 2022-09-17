#include<bits/stdc++.h>
using namespace std;
void display(vector<int>&v){
    for(auto &val:v){
        cout<<val<<" ";
    }
    cout<<endl;
}
bool cmp(int a, int b){
    return a>b;
}
int main(){
    vector<int>v={12,43,5,4,64,34,656,744,56,3};
    display(v);
    cout<<"Increasing Order"<<endl;
    sort(v.begin(),v.end());
    display(v);
    cout<<"Decreasing Order using default comperator"<<endl;
    sort(v.begin(),v.end(),greater<int>());//default comperator can be declare.
    display(v);
    cout<<"Decreasing Order using custom comperator "<<endl;
    sort(v.begin(),v.end(),cmp);//default comperator can be declare.
    display(v);
return 0;
}