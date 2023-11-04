#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i = 0; i<n; i++){
        int data;
        cin>>data;
        v.push_back(data);
    }
    int spike;
    cin>>spike;

    //convering into binary
    vector<int>ans;
    for(auto val: v){
        vector<int>temp;
        while(val){
            int bit = val&1;
            val = val>>1;
            temp.push_back(bit);
        }
        reverse(temp.begin(),temp.end());
        if(temp.size()<=spike){
            ans.push_back(0);
        }else{
            for(int i = 0; i<spike; i++){
                temp.pop_back();
            }
            for(auto temp_val: temp){
                ans.push_back(temp_val);
            }
        }
    }
    cout<<"answer is: ";
    for(auto val: ans){
        cout<<val<<" ";
    }
return 0;
}