//element should be greater than 3
#include<bits/stdc++.h>
using namespace std;
int peakMountain(vector<int>&v){
    int s = 0;
    int e = v.size()-1;
    int mid = s+ (e-s)/2;
    while (s<=e)
    {
        if(v[mid]>v[mid+1] && v[mid]>v[mid-1]){
            return mid;
        }else if(v[mid]<v[mid+1]){
            s = mid +1;
        }else if(v[mid]>v[mid+1]){
            e = mid -1;
        }
        mid = s + (e-s)/2;
    }
    return -1;
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
    int peak = peakMountain(v);
    cout<<"The peak value is "<<v[peak]<<endl;
return 0;
}