#include<bits/stdc++.h>
using namespace std;
void printArray(auto &v){
    for (auto &val : v)
    {
        cout << val << " ";
    }
}
int main(){
    vector<int> v;
    cout << "Enter the size of vector " << endl;
    int size;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the " << i + 1 << " element" << endl;
        int num;
        cin >> num;
        v.push_back(num);
    }

    cout<<"actual array "<<endl;
    printArray(v);
    unordered_set<int> u;
    for (int i = 0; i < size; i++)
    {
        u.insert(v[i]);
    }
    cout<<endl<<"Unique Number"<<endl;
    printArray(u);
    
return 0;
}