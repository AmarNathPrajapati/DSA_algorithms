#include<bits/stdc++.h>
using namespace std;
void printArray(vector<int> &v){
    for (auto &val : v)
    {
        cout << val << " ";
    }
}
//using two pointer approach
vector<int> mergeArray(vector<int>&v1, vector<int>&v2){
    int i = 0;
    int j = 0;
    int k = 0;
    vector<int> v3;
    while (i< v1.size() && j<v2.size())
    {
        if(v1[i]<v2[j]){
            v3.push_back(v1[i]);
            i++;
        }else{
            v3.push_back(v2[j]);
            j++;
        }
    }
    while (i<v1.size())
    {
        v3.push_back(v1[i]);
        i++;
    }
    while (j<v2.size())
    {
        v3.push_back(v2[j]);
        j++;
    }
    return v3;
}
int main(){
    vector<int> v = {1,3,5,7};
    vector<int> v2 = {2,4,6};
    vector<int> v3 = mergeArray(v,v2);
    printArray(v3);
return 0;
}