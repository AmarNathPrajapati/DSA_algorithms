#include<bits/stdc++.h>
using namespace std;
int findPeak(vector<int> &v){
    //using binary search
    int s = 0;
    int e = v.size()-1;
    int mid = s + (e-s)/2;
    while (s<e)
    {
        if(v[mid]<v[mid+1]){
            s = mid +1;
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
    int peak = findPeak(v);
    cout<<"peak value is "<<v[peak]<<endl;
return 0;
}