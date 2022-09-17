#include<bits/stdc++.h>
using namespace std;
void display(vector<int>&v){
    for(auto val:v){
        cout<<val<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> v(10);
    for (int i = 0; i <v.size(); i++)
    {
        cout<<"Enter the value"<<endl;
        cin>>v[i];
    }
    // sort(v.begin(),v.end());
    // display(v);
    sort(v.end()-5,v.end());//sort last five value
    display(v);
return 0;
}