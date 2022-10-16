#include<bits/stdc++.h>
using namespace std;
vector<int> sort01(vector<int> &v){
    int i = 0;//first pointer 
    int j = v.size()-1;//second pointer
    while (i<j)
    {
        if(v[i]==2 || v[j]==2){
          i++;
          j--;
        }
        if(v[i]==0){
            i++;
        }else if(v[j]==1){
            j--;
        }else if(v[i]==1 && v[j]==0){
            swap(v[i],v[j]);
            i++;
            j--;
        }
    }
    return v;
}
vector<int> sort02(vector<int> &v){
    int i = 0;//first pointer 
    int j = v.size()-1;//second pointer
    while (i<j)
    {
        if(v[i]==1 || v[j]==1){
          i++;
          j--;
        }
        if(v[i]==0){
            i++;
        }else if(v[j]==2){
            j--;
        }else if(v[i]==2 && v[j]==0){
            swap(v[i],v[j]);
            i++;
            j--;
        }
    }
    return v;
}
vector<int> sort12(vector<int> &v){
    int i = 0;//first pointer 
    int j = v.size()-1;//second pointer
    while (i<j)
    {
        if(v[i]==0 || v[j]==0){
          i++;
          j--;
        }
        if(v[i]==1){
            i++;
        }else if(v[j]==2){
            j--;
        }else if(v[i]==2 && v[j]==1){
            swap(v[i],v[j]);
            i++;
            j--;
        }
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
    vector<int> preans=sort02(ans);
     for(int val:preans){
        cout<<val<<" ";
    }
    cout<<endl;
    vector<int> finalAns = sort12(preans);
    for(int val:finalAns){
        cout<<val<<" ";
    }
    cout<<endl;
return 0;
}