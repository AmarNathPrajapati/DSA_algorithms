#include<bits/stdc++.h>
using namespace std;
void printArray(vector<int> &v){
    for (auto &val : v)
    {
        cout << val << " ";
    }
}
void rotateArray(vector<int> &v, int index){
    // if actual array is changed then, may be answer will wrong.
    int size = v.size();
    vector<int>temp(size);
    for (int i = 0; i <size; i++)
    {
        temp[(i+index)%size]= v[i];
    }
    v = temp;
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
    cout<<"Enter the index "<<endl;
    int index;
    cin>>index;
    //rotate() learn
    rotateArray(v,index);
    printArray(v);
return 0;
}