#include<iostream>
using namespace std;

int main(){
    cout<<"Creating dynamic 2d array"<<endl;
    //we argue to heap for array of pointer then point all pointer to array
    int row,col;
    cout<<"Enter the number of row and column"<<endl;
    cin>>row>>col;
    //requesting memory for row
    int **arr = new int*[row];
    //allocating memory to column
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }
    //taking input
    cout<<"Enter the value in 2d array"<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin>>arr[i][j];
        }
    }
    //printing output
    cout<<"printing output..."<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    //Note: after utiilization of memory, you should free the heap area.
    //first free all column
    for (int i = 0; i < row; i++)
    {
        delete []arr[i];
    }
    //then free row
    delete []arr;
    cout<<"The heap is freed from my side........."<<endl;
    
return 0;
}