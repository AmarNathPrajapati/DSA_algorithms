#include<iostream>
#include<vector>
using namespace std;
void show(vector<int> *v,int size){
    for (int i = 0; i <size ; i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    
}
int main(){
    cout<<"Enter the size of Array"<<endl;
    int size;
    cin>>size;
    vector<int> v_arr[size];

    //creating static array
    // v_arr[0] ={1,2,3,4,5};
    // v_arr[1] ={6,7,8,9};
    // v_arr[2] ={10,11,12};
    // v_arr[3] ={13,14};
    // v_arr[4] ={15};

    //dynamic vector creation
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter the size of "<<i+1<<" vector"<<endl;
        int size_vec;
        cin>>size_vec;
        for (int j = 0; j < size_vec; j++)
        {
            cout<<"Enter the "<<j+1<<" element in "<<i+1<<" vector"<<endl;
            int element;
            cin>>element;
            v_arr[i].push_back(element);
        }
    }
    
    //displaying the content of array of vector
    show(v_arr,size);
return 0;
}