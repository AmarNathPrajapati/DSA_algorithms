#include<bits/stdc++.h>

using namespace std;

// linear search in 2D
bool linearSearch(vector<vector<int>>arr, int target){
    int row = arr.size();
    int col = arr[0].size();
    for(int i = 0; i<row; i++){
        for (int j = 0; j < col; j++)
        {
            if(arr[i][j]==target){
                return true;
            }
        }
        cout<<endl;
    }
    return false;
}
int main(){
    vector<vector<int>>arr={
        {1,2,3,4},
        {4,5,6,5},
        {7,8,9,6}
    };
    //row wise traversal
    int row = 3;
    int col = 4;
    for(int i = 0; i<row; i++){
        for (int j = 0; j < col; j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    //col wise traversal
    for(int i = 0; i<col; i++){
        for (int j = 0; j < row; j++)
        {
            cout<<arr[j][i];
        }
        cout<<endl;
    }
    if(linearSearch(arr,3)){
        cout<<"found"<<endl;
    }else{
        cout<<"Not found"<<endl;
    }
return 0;
}