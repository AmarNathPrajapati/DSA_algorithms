#include<bits/stdc++.h>
using namespace std;
void printArray(vector<int> &v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i];
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    vector<int> v;    
    while(n!= 0){
        int bit = n & 1;
        v.push_back(bit);
        n = n>>1;
    }
    reverse(v.begin(),v.end());
    printArray(v);
return 0;
}