#include<bits/stdc++.h>
using namespace std;

int main(){
    // int arr[6] = {1,2,4,5,6,7};
    // vector<int> v = {1,2,4,5,6,7};
    int size;
    cout<<"Enter the size of vector"<<endl;
    cin>>size;
    vector<int> v(size);
    //v(5)={0,0,0,0,0}
    for (int i = 0; i < v.size(); i++)
    {
        cout<<"Enter the "<<i+1<<" element in array"<<endl;
        int val;
        cin>>val;
        v[i] = val;
    }
    vector<int>::iterator it;
    // it = lower_bound(v.begin(),v.end(),5);
    it = upper_bound(v.begin(),v.end(),5);
    if(it!=v.end()){
        cout<<*it<<endl;
    }else{
        cout<<"Not found"<<endl;
    }
return 0;
}