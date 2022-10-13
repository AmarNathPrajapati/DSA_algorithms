#include<bits/stdc++.h>
using namespace std;
int getRepeat(vector<int>v){
    int sum = 0;
    int array_size = v.size();
    for (int i = 0; i <array_size; i++)
    {
        sum = sum + v[i];
    }
    int sum2 = (array_size*(array_size-1))/2;
    int ans = sum -sum2;
    return ans;
}
int main(){
    vector<int> v;
    int size;
    cout<<"Enter the size of the vector"<<endl;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter the "<<i+1<<" Element in the vector"<<endl;
        int num;
        cin>>num;
        v.push_back(num);
    }
    int unique = getRepeat(v);
    cout<<"The repeated number is "<<unique<<endl;
return 0;
}