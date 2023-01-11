#include<bits/stdc++.h>
using namespace std;
void printArr(int arr[],int size){
    cout<<"printing..."<<endl;
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int size;
    cout<<"Enter the size: "<<endl;
    cin>>size;
    // int arr[size];//bad practice, if size is greater than stack the progam will crash.(1000000)
    // cout<<"Enter the element in array"<<endl;
    // for (int i = 0; i < size; i++)
    // {
    //     cin>>arr[i];
    // }
    // printArr(arr,size);

    //static allocation of a variable
    int i = 5;
    cout<<"static i: "<<i<<endl;
    //dynamic allocation of variable
    int *iptr = new int;
    *iptr = 5;
    cout<<"dynamic *iptr: "<<*iptr<<endl;
    cout<<"free heap memory"<<endl;
    delete iptr;
    //dynamic allocation of array
    int *arr = new int[size];//good pratice
    cout<<"Enter the element in array"<<endl;//1000000 dene par chal gaya program
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    printArr(arr,size);
    cout<<"free memory from heap and that pointer will be become dangling pointer"<<endl;
    delete []arr;

    
return 0;
}   