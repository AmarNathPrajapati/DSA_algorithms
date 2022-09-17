#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {1,3,56,7,2,4,4,4,4,6,8,-3};
    vector<int>::iterator it;
    it = min_element(v.begin(),v.end());//O(n)
    cout<<"The minimum element in Array is "<<*it<<endl;
    it = max_element(v.begin(),v.end());//O(n)
    cout<<"The maximum element in Array is "<<*it<<endl;
    it = find(v.begin(),v.end(),4);//O(n)
    cout<<"The total number of desired element in Array is "<<*it<<endl;

    vector<int> v1 = {1,2,3,4,5,5,5,5};
    int sum = accumulate(v1.begin(),v1.end(),0);//0 is initial value and time complexity is O(n)
    cout<<"The sum of total element is "<<sum<<endl;
    int cnt = count(v1.begin(),v1.end(),5);//0 is initial value and time complexity is O(n)
    cout<<"The number of desired is "<<cnt<<endl;
    reverse(v1.begin(),v1.end());
    for(auto &val:v1){
        cout<<val<<" ";
    }
return 0;
}