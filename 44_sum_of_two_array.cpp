#include<bits/stdc++.h>
using namespace std;
void printArray(vector<int> &v){
    for (auto &val : v)
    {
        cout << val << " ";
    }
    cout<<endl;
}
vector<int> sumOfArray(vector<int> v1, vector<int>v2){
    int size1 = v1.size();
    int size2 = v2.size();
    vector<int> v3;
    int i = size1-1;
    int j = size2-1;
    int carry = 0;
    int sum = 0;
    while (i>=0 && j>=0)
    {
        int add = v1[i] + v2[j] + carry;
        // cout<<"add "<<add<<endl;
        carry = add/10;
        sum = add%10;
        v3.push_back(sum);
        j--;
        i--;
    }
    while (i>=0)
    {
        int add = v1[i] + carry;
        carry = add/10;
        sum = add%10;
        v3.push_back(sum);
        i--;
    }
    while (j>=0)
    {
        int add = v1[i] + carry;
        carry = add/10;
        sum = add%10;
        v3.push_back(sum);
        j--;
    }
    while (carry!=0)
    {
        cout<<"carry"<<carry<<endl;
        v3.push_back(carry);
        carry--;
    }
    reverse(v3.begin(),v3.end());
    return v3;
    
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
    printArray(v);
    int size2;
    cout<<"Enter the size of vector2"<<endl;
    cin>>size2;
    vector<int> v2;
    for(int i=0; i<size2; i++){
        cout<<"Enter the "<<i+1<<" element in vector"<<endl;
        int num;
        cin>>num;
        v2.push_back(num);
    }
    printArray(v2);
    vector<int>ans = sumOfArray(v,v2);
    cout<<"Sum of array is "<<endl;
    printArray(ans);
return 0;
}