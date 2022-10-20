#include<bits/stdc++.h>
using namespace std;
void printArray(vector<int> &v){
    for (auto &val : v)
    {
        cout << val << " ";
    }
    cout<<endl;
}
bool checkSortedRotated(vector<int> &v){
    // cout<<"function me hoon"<<endl;
    int count = 0;
    int size = v.size();
    for (int i = 0; i < size-1; i++)
    {
        if(v[i]>v[i+1]){
            count++;
        }
    }
    if(v[size-1]>v[0]){
        count++;
    }
    // cout<<"count ki value"<<count<<endl;
    return (count <=1 );
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
    bool ans = checkSortedRotated(v);
    if(ans){
        cout<<"Array is sorted and rotated"<<endl;
    }else{
        cout<<"Array is not sorted and roated"<<endl;
    }
return 0;
}