#include<bits/stdc++.h>
using namespace std;
void printArray(vector<int>&v){
    for(int i:v){
        cout<<i<<" ";
    }
}
void insertionSort(vector<int>&v){
    cout<<endl<<"Insertion Sort running....."<<endl;
    for (int i = 1; i < v.size(); i++)
    {
        int temp = v[i];
        int j;
        for (j = i-1; j >= 0; j--)
        {
            if(v[j]>temp){
                v[j+1] = v[j];
            }else{
                break;
            }
        }
        v[j+1] = temp;//define j outside
    }
}
int main(){
    vector<int> v;
    cout << "Enter the size of vector" << endl;
    int size;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the " << i + 1 << "th element in the vector" << endl;
        int num;
        cin >> num;
        v.push_back(num);
        
    }
    printArray(v);
    insertionSort(v);
    printArray(v);
return 0;
}