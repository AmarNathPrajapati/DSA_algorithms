#include<bits/stdc++.h>
using namespace std;
vector<int> getVector(int n){
    vector<int> ans;
        for(int i = -n/2; i<= n/2; i++){
            if(n%2==0 && i==0){
                continue;
            }
            ans.push_back(i);
        }
        return ans;
        
}
int main(){
    int size;
    cout<<"Enter the size of the vector"<<endl;
    cin>>size;
    vector<int> v = getVector(size);
    for(int i:v){
        cout<<i<<" ";
    }
return 0;
}