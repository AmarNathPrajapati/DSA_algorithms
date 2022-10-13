#include<bits/stdc++.h>
using namespace std;
void intersection(vector<int> v1, vector<int> v2){
    int i;//first pointer
    int j;//second pointer
    vector<int> ans;
    for (i = 0; i < v1.size()-1;)
    {
        for (j = 0; j < v2.size()-1;)
        {
            /*
            Debugging
            cout<<"iteration"<<endl;
            cout<<"v1 "<<v1[i]<<endl;
            cout<<"v2 "<<v2[j]<<endl;
            cout<<"i"<<i<<endl;
            cout<<"j"<<j<<endl;
            */
            if(v1[i]==v2[j]){
                ans.push_back(v1[i]);
                i++;
                j++;
            }
            else if(v1[i]<v2[j]){
                i++;
            }else{
                j++;
            }
        }
    }
    for(int &val:ans){
        cout<<val<<" ";
    }
}
int main(){
    int size1;
    cout<<"Enter the size of vector"<<endl;
    cin>>size1;
    vector<int> v1;
    for(int i=0; i<size1; i++){
        cout<<"Enter the "<<i+1<<" element in vector"<<endl;
        int num;
        cin>>num;
        v1.push_back(num);
    }
    int size2;
    cout<<"Enter the size of vector"<<endl;
    cin>>size2;
    vector<int> v2;
    for(int i=0; i<size2; i++){
        cout<<"Enter the "<<i+1<<" element in vector"<<endl;
        int num;
        cin>>num;
        v2.push_back(num);
    }
    cout<<"Intersection of vectors are: "<<endl;
    intersection(v1,v2);
return 0;
}