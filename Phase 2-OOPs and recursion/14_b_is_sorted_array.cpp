#include<iostream>
using namespace std;
void printArray(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}
bool isSorted(int arr[],int size){
    //behind the scene
    printArray(arr,size);
    //base condtion
    if(size==0 || size==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }else{
        bool ans = isSorted(arr+1,size-1);
        return ans;
    }
}
int main(){
    int arr[] = {1,2,3,4,5,6};
    int size = sizeof(arr)/sizeof(int);
    if(isSorted(arr,size)){
        cout<<"Sorted in increasing order"<<endl;
    }else{
        cout<<"Not sorted"<<endl;
    }
return 0;
}