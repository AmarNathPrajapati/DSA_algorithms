#include<bits/stdc++.h>
using namespace std;
vector<int> sort01(vector<int> &v){
    for(int val: v){
        cout<<val<<" ";
    }
    cout<<endl;
    int i = 0;//first pointer 
    int j = v.size()-1;//second pointer
    int count = 0;
    while (i<j)
    {
        // cout<<"iteration "<<count+1<<endl;
        if(v[i]==0){
            // cout<<"i++ wale me hoon"<<endl;
            i++;
        }else if(v[j]==1){
            // cout<<"j-- wale me hoon"<<endl;
            j--;
        }else if(v[i]==1 && v[j]==0){
            // cout<<"swap wale me hoon"<<endl;
            swap(v[i],v[j]);
            i++;
            j--;
        }
        cout<<"i"<<v[i]<<endl;
        cout<<"j"<<v[j]<<endl;
        count++;
    }
    return v;
}
int main(){
    int size;
    cout<<"Enter the size of vector"<<endl;
    cin>>size;
    vector<int> v;
    for(int i=0; i<size; i++){
        cout<<"Enter the "<<i+1<<" element in vector"<<endl;
        int num;
        cin>>num;
        v.push_back(num);
    }
    vector<int> ans=sort01(v);
    for(int val:ans){
        cout<<val<<" ";
    }
    cout<<endl;
return 0;
}