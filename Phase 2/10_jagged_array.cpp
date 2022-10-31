#include<iostream>
using namespace std;

int main(){
    cout<<"Creating dynamic 2d array"<<endl;
    //we argue to heap for array of pointer then point all pointer to array
    int row;
    cout<<"Enter the number of row"<<endl;
    cin>>row;
    //requesting memory for row
    int **arr = new int*[row];
    //allocating memory to column

    int col[row];
    for (int i = 0; i < row; i++)
    {   cout<<"Enter the size of "<<i+1<<" column"<<endl;
        cin>>col[i];
        arr[i] = new int[col[i]];
    }
    //taking input
    cout<<"Enter the value in 2d array"<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col[i]; j++)
        {
            cin>>arr[i][j];
        }
    }
    //printing output
    cout<<"printing output..."<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col[i]; j++)
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