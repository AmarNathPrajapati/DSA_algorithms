#include<bits/stdc++.h>
using namespace std;
void printArray(vector<int> &v){
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
    vector<int>::iterator iter1 = v.begin();//pointing first element.
    vector<int>::iterator iter2 = v.begin()+1;//pointing last element.
    vector<int>::iterator end = v.end()-1;//pointing last element.
    while((iter1 < end) || (iter2<end)){
        swap(*iter1,*iter2);
        iter1+=2;
        iter2+=2;
    }
    cout<<endl<<"Desired Array "<<endl;
    printArray(v);
return 0;
}