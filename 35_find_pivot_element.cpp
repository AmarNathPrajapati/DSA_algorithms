#include<bits/stdc++.h>
using namespace std;
int findPivot(vector<int> &v){
    int s = 0;
    int e = v.size() -1;
    int mid = s + (e-s)/2;
    while (s<e)
    {
        if(v[mid]>v[0]){
            s = mid + 1;
        }else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
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
    int pivot = findPivot(v);
    cout<<"The index of pivot element is "<<pivot<<" and the pivot value is "<<v[pivot]<<endl;

return 0;
}