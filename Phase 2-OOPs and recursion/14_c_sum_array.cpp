#include<iostream>
using namespace std;
void printArray(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int sumArray(int arr[], int size){

    //base case 
    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }
    int remain = sumArray(arr+1,size-1);
    int sum = remain + arr[0];
    return sum;

}
int main(){
    int arr[] = {1,2,3,4,5,6};
    int size = sizeof(arr)/sizeof(int);
    cout<<"The sum array is: "<<sumArray(arr,size);
return 0;
}