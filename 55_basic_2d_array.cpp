#include<bits/stdc++.h>
using namespace std;
    //printing output
void print2dArray(int arr[][4],int row, int col){
    cout<<"printing 2D array"<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
//  linear Search in 2D array
int linearSearch2d(int arr[][4],int target,int row , int col){
    cout<<"Searching in 2D array"<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(arr[i][j]==target){
                return 1;
            }
        }
    }
    return 0;
}
// row wise sum in 2d array
void sumRowWise(int arr[][4],int row, int col){
    cout<<"Summation row wise"<<endl;
    for (int i = 0; i < row; i++)
    {   int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}
//column wise sum in 2d array
void sumColWise(int arr[][4],int row,int col){
    cout<<"Summation col wise"<<endl;
    for (int i = 0; i < col; i++)
    {
        int sum = 0;
        for (int j = 0; j < row; j++)
        {
            sum+=arr[j][i];
        }
    cout<<sum<<" ";
    }
    cout<<endl;
}
void largestRowSum(int arr[][4],int row ,int col){
    cout<<"finding largest sum in row wise"<<endl;
    int maxi = INT_MIN;
    int rowIndex = -1;
    for (int i = 0; i < row; i++)
    {   int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        if(sum>maxi){
            maxi = sum;
            rowIndex = i;
        }
    }
    cout<<"Maximum sum in row "<<maxi<<endl;
    cout<<"row index is "<<rowIndex<<endl;
    cout<<endl;
}
int main(){
    cout<<"Enter the row  and column"<<endl;
    int row,col;
    cin>>row>>col;
    int arr[row][4];
    // taking input row wise
    cout<<"Taking input row wise"<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    /**
     * 
    cout<<"Taking input col wise"<<endl;
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cin>>arr[j][i];
        }
    }
    */

    print2dArray(arr,row,col);
    cout<<"Enter the element for the search"<<endl;
    int element;
    cin>>element;
    if(linearSearch2d(arr,element,row,col)){
        cout<<"Element Found"<<endl;
    }else{
        cout<<"Element Not Found"<<endl;
    }
    sumRowWise(arr,row,col);
    sumColWise(arr,row,col);
    largestRowSum(arr,row,col);
return 0;
}   