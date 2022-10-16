#include<bits/stdc++.h>
using namespace std;
int firstOccurrence(vector<int> &v,int num){
    int s = 0;
    int e= v.size() -1;
    int mid = s + (e-s)/2;
    int ans;
    while (s<=e)
    {
        if(v[mid]==num){
            e = mid-1;
            ans = mid;
        }else if(v[mid]<num){
            s = mid + 1;
        }else{
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;  
}
int lastOccurrence(vector<int> &v,int num){
    int s = 0;
    int e= v.size() -1;
    int mid = s + (e-s)/2;
    int ans;
    while (s<=e)
    {
        if(v[mid]==num){
            s = mid+1;
            ans = mid;
        }else if(v[mid]<num){
            s = mid + 1;
        }else{
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;  
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
    sort(v.begin(),v.end());
    int num;
    cout<<"Enter the number for search"<<endl;
    cin>>num;
    int f = firstOccurrence(v,num);
    cout<<"first occurrence "<<f<<endl;
    int l = lastOccurrence(v,num);
    cout<<"last occurrence "<<l<<endl;
return 0;
}