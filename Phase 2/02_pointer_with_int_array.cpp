#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[5]={3,4,5,7,8};
    int *iptr = &arr[0];
    cout<<"arr: "<<arr<<endl;//address of first element
    cout<<"iptr: "<<iptr<<endl;//pointer to first element
    cout<<"*arr: "<<*arr<<endl;//value at first location
    cout<<"*iptr: "<<*iptr<<endl;//value at first location
    cout<<"arr[2]: "<<arr[2]<<endl;//value of third element
    cout<<"iptr[2]: "<<iptr[2]<<endl;//value of third element

    /**Pointer Arithematic with array*/
    cout<<"arr+1: "<<arr+1<<endl;//location of next value
    cout<<"iptr+1: "<<iptr+1<<endl;//location of next value
    cout<<"*(arr+2): "<<*(arr+2)<<endl;//value of third element
    cout<<"*(iptr+2): "<<*(iptr+2)<<endl;//value of third element
    cout<<"2[arr]: "<<2[arr]<<endl;//value of third element
    cout<<"2[iptr]: "<<iptr[2]<<endl;//value of third element

    /*Difference between pointer and arr*/
    cout<<"Difference b/w arr and iptr"<<endl;
    cout<<"size..."<<endl;
    cout<<"sizeof(arr): "<<sizeof(arr)<<endl;//20 (5*sizeof(int))
    cout<<"sizeof(iptr): "<<sizeof(iptr)<<endl;//8 (always for 64 bit computer)
    cout<<"Ampersand Operator..."<<endl;
    cout<<"arr: "<<arr<<endl;//location of first value
    cout<<"&arr: "<<&arr<<endl;//location of first value
    cout<<"&arr[0]: "<<&arr[0]<<endl;//location of arr(first value)
    cout<<"iptr: "<<iptr<<endl;//location of first value
    cout<<"&iptr: "<<&iptr<<endl;//location of iptr
    cout<<"Symbol table mapping cann't be changed..."<<endl;
    // arr = arr+1;
    cout<<"arr=arr+1:error"<<endl;
    iptr = iptr+1;
    cout<<"iptr = iptr+1:no error "<<endl;
    cout<<"address of iptr: "<<iptr<<endl;
    cout<<"Value at iptr: "<<*iptr<<endl;
    cout<<"That's all about pointer and integer array....Thank you"<<endl;

return 0;
}   