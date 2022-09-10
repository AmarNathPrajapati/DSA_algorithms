#include<iostream>
#include<vector>
using namespace std;
void show(auto &v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<"Content in "<< i+1 <<" vector"<<endl;
        for (int j = 0; j < v[i].size(); j++)
        {
            cout<<v[i][j]<<" "<<endl;
        }
    }
}
int main(){
    vector<vector<int>> v;
    cout<<"Enter the size of 2d vector"<<endl;
    int size;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        vector<int> temp_vec;
        cout<<"Enter the size of "<<i+1<<" 1d vector"<<endl;
        int temp_vec_size;
        cin>>temp_vec_size;
        for (int j = 0; j < temp_vec_size; j++)
        {
            cout<<"Enter the element in temp vector"<<endl;
            int element;
            cin>>element;
            temp_vec.push_back(element);
        }
        v.push_back(temp_vec);
    }
    show(v);
    
return 0;
}