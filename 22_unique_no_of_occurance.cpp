#include<bits/stdc++.h>
using namespace std;
bool uniqueOccurrences(vector<int>& arr) {
        int n = arr.size();//array size
        unordered_map<int,int> m;
        for(int i = 0; i< n; i++){
            int value = arr[i];
            m[value]=m[value]+1;//each element push into map and count if repeat
        }
        unordered_set<int> s;
        int sum1 = 0;
        for(auto &value : m){
            s.insert(value.second);//push count into set for unique
            sum1 = sum1 + value.second;
        }
        int sum2 = 0;
        for(int value : s){
            sum2 = sum2+value;
        }
        if(sum1-sum2==0){
            return true;
        }else{
            return false;
        }
    }
int main(){
    vector<int> v;
    cout<<"Enter the size of vector";
    int size;
    cin>>size;
    for(int i=0;i<size;i++){
        cout<<"Enter the "<<i+1<<" element of vector"<<endl;
        int num;
        cin>>num;
        v.push_back(num);
    }
    if(uniqueOccurrences(v)){
        cout<<"Occurrance of element is unique"<<endl;  
    }else{
        cout<<"Occurrance of element is not unique"<<endl;
    }
return 0;
}