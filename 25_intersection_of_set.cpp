#include<bits/stdc++.h>
using namespace std;
void setIntersection(unordered_set<int> s1, unordered_set<int> s2){
    vector<int> v;
    for(auto &val1 : s1){
        for(auto &val2 : s2){
            if(val1 == val2){
                v.push_back(val1);
            }
        }
    }
    for(int &val:v){
        cout<<val<<" ";
    }
}
int main(){
    unordered_set<int> s1;
    unordered_set<int> s2;
    cout<<"Enter the size of first set"<<endl;
    int size1;
    cin>>size1;
    for (int i = 0; i < size1; i++)
    {
        cout<<"Enter the "<<i+1<<"Element in set"<<endl;
        int num;
        cin>>num;
        s1.insert(num);
    }
    cout<<"Enter the size of second set"<<endl;
    int size2;
    cin>>size2;
    for (int i = 0; i < size2; i++)
    {
        cout<<"Enter the "<<i+1<<"Element in set"<<endl;
        int num;
        cin>>num;
        s2.insert(num);
    }
    // set_intersection();
    cout<<"The element in first set"<<endl;
    for(auto &val1: s1){
        cout<<val1<<" ";
    }
    cout<<endl;
    cout<<"The element in second set"<<endl;
    for(auto &val1: s2){
        cout<<val1<<" ";
    }
    cout<<endl;
    cout<<"Intesection of set: ";
    setIntersection(s1,s2);
return 0;
}