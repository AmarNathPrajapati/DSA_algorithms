#include<bits/stdc++.h>
using namespace std;
void printArray(auto &v){
    for (auto &val : v)
    {
        cout << val << " ";
    }
    cout<<endl;
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
    printArray(v);
return 0;
}