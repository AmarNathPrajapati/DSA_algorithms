#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,11,23,45};
    cout<<"printing the array before reverse: ";
    int size = sizeof(arr)/sizeof(int);
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //reverse the array optimized way
    int i = 0;
    int j = size-1;
    while(i<j){
        swap(arr[i++],arr[j--]);
    }
    cout<<"printing the array before reverse: ";
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
