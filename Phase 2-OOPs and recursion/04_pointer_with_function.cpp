#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[],int size){
    cout<<"Printing using array..."<<endl;
    cout<<"sizeof(arr): "<<sizeof(arr)<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"here arr implemented as pointer"<<endl;
    cout<<endl;
}
void printArrayPtr(int *ptr,int size){
    cout<<"Printing using pointer..."<<endl;
    cout<<"sizeof(ptr): "<<sizeof(ptr)<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<ptr[i]<<" ";
    }
    cout<<endl;
}
void updateA(int *aptr){
    cout<<"updating..."<<endl;
    //updating aptr in function
    *aptr = *aptr+1;
    aptr = aptr+1;//no change in actual

}
int main(){
    int arr[5]={5,6,4,6,3};
    int *iptr = &arr[0];
    cout<<"sizeof(arr): "<<sizeof(arr)<<endl;
    printArray(arr,5);
    printArrayPtr(iptr,5);
    cout<<"No difference array passing and pointer passing"<<endl;
    int a = 5;
    int *aptr = &a;
    cout<<"aptr: "<<aptr<<endl;
    cout<<"*aptr: "<<*aptr<<endl;
    updateA(aptr);
    cout<<"aptr: "<<aptr<<endl;
    cout<<"*aptr: "<<*aptr<<endl;
    cout<<"passing a part of array..."<<endl;
    printArrayPtr(arr+2,3);
return 0;
}