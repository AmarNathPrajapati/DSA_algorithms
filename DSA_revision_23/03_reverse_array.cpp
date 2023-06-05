#include<bits/stdc++.h>

using namespace std;

void printArray(vector<int>&v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void reverseArray(vector<int>&v){
    int s = 0;
    int e = v.size()-1;
    while(s<e){
        swap(v[s++],v[e--]);
    }
}
void swapAlternate(vector<int>&v){
    int i = 0;
    int j = 1;
    int n = v.size()-1;
    while(i<=n && j<=n){
        swap(v[i],v[j]);
        i=i+2;
        j=j+2;
    }
}
void uniqueNum(vector<int>&v){
    set<int> s;
    for (int i = 0; i < v.size(); i++)
    {
        s.insert(v[i]);
    }
    v.clear();
    for(auto i : s){
        v.push_back(i);
    }
}
int main(){
    vector<int> v = {1,2,3,4,5,3,2,3,2,5,6};
    cout<<"Array before reverse..."<<endl;
    printArray(v);
    // cout<<"Array after reverse..."<<endl;
    // reverseArray(v);
    // printArray(v);
    // cout<<"Alternate Swap..."<<endl;
    // swapAlternate(v);
    cout<<"Print Unique Number..."<<endl;
    uniqueNum(v);
    printArray(v);
return 0;
}