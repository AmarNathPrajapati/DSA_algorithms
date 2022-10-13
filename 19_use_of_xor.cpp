#include<bits/stdc++.h>
using namespace std;
int getUnique(vector<int>v){
    int sum = 0;
    for (int i = 0; i < v.size(); i++)
    {
        sum = sum ^ v[i];
    }
    return sum;
}
int main(){
    vector<int> v;
    int size;
    cout<<"Enter the size of the vector"<<endl;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter the "<<i+1<<" Element in the vector"<<endl;
        int num;
        cin>>num;
        v.push_back(num);
    }
    int unique = getUnique(v);
    cout<<"The unique number is "<<unique<<endl;
return 0;
}