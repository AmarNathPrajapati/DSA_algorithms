#include<bits/stdc++.h>
using namespace std;
                                            //selection sort means select minimum element and replace ith position
void printArray(vector<int> &v){            // printing array
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void selection_sort(vector<int> &v){
    cout<<"Selection Sort running......"<<endl;
    for (int i = 0; i < v.size()-1; i++)     // i 0 to <size-1 because no need to compare with last element
    {
        int minIndex = i;                    // hamne maan liya ith position wala sabse minimum element hai.
        for (int j = i+1; j < v.size(); j++) // if i is minimum, then checking start from i+1 check till last element
        {   
           if(v[minIndex]>v[j]){            // agar minIndex jth index se bada hai to 
                minIndex = j;               //minIndex ki value j ke barabar kar do.
           }
        }
        swap(v[minIndex],v[i]);             //finally ith position ki jagah minimum element rakh do(swap kar do)
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
    selection_sort(v);
    printArray(v);
return 0;
}