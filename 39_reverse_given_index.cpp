#include <bits/stdc++.h>
using namespace std;

void printArray(vector<int> &v){
    for (auto &val : v)
    {
        cout << val << " ";
    }
}
void reversingArray(vector<int> &v,int index){
    cout <<endl<< "Reversing the string....." << endl;
    vector<int>::iterator iter1 = v.begin()+index;//pointing first element.
    vector<int>::iterator iter2 = v.end()-1;//pointing last element
    while (iter1 < iter2)
    {
        swap(*iter1, *iter2);
        iter1++;
        iter2--;
    }
}
int main()
{
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
    cout<<"actual string "<<endl;
    printArray(v);
    cout<<endl;
    int index;
    cout<<"Enter the index"<<endl;
    cin>>index;
    reversingArray(v,index);
    cout << "Reversed String" << endl;
    printArray(v);
    cout<<endl;
    return 0;
}