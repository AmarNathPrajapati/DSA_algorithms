                                                // write a very optimize code for bubble sort.
#include<bits/stdc++.h>
using namespace std;
                                                //Bubble sort means ith position ke ith largest element ko right place me rakhana.
void printArray(vector<int> &v){                // printing array
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void Bubble_sort(vector<int> &v){
    cout<<"Bubble Sort running......"<<endl;
    for (int i = 0; i < v.size()-1; i++)
    {
                                                // let's optimize the code
                                                // 2. if element is already sorted,there there is no need to compare and swap again and again.
        bool swapped = false;
                                                // 1. if last element is sort in each iteration then there is no need to compare
                                                //for (int j = 0; j < v.size()-1; j++)
        for (int j = 0; j < v.size()-i-1; j++)  // i 0 to <size-1 because no need to compare with last element
        {
            if(v[j]>v[j+1]){                    // if v[j], v[j+1] se bada hai to 
                swap(v[j],v[j+1]);              // swap kar diya jaye
                swapped = true;
            }
        }
        if(swapped == false){
            break;
        }
        
    }
    
}
int main(){
    vector<int> v;
    cout<<"Enter the size of vector"<<endl;
    int size;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter the "<<i+1<<" Element in vector"<<endl;
        int num;
        cin>>num;
        v.push_back(num);
    }
    
    printArray(v);
    Bubble_sort(v);
    printArray(v);
return 0;
}