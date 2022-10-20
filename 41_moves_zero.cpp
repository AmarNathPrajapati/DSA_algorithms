#include<bits/stdc++.h>
using namespace std;
void printArray(vector<int> &v){
    for (auto &val : v)
    {
        cout << val << " ";
    }
}
void moveZero(vector<int> &v){
    int i = 0;
    for (int j = 0; j < v.size(); j++)
    {
        if(v[j]!=0){
            swap(v[j],v[i]);
            i++;
        }
    }
}
int main(){
    vector<int> v = {0,2,0,6,7,0,0};
    moveZero(v);
    printArray(v);
    
return 0;
}