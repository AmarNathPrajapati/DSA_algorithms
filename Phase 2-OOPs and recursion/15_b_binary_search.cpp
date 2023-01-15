#include<iostream>
using namespace std;
void printArray(int arr[],int s, int e){
    for (int i = s; i <=  e; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
bool binarySearch(int arr[],int s,int e,int key){
    //behind the scene
    printArray(arr,s,e);
    //base codition
    if(s>e){
        return false;
    }
    int mid = s + (e-s)/2;
    if(arr[mid]==key){
        cout<<"index: "<<mid<<endl;
        return true;
    }
    //recurrence relation
    if(key>arr[mid]){
        return binarySearch(arr,mid+1,e,key);
    }else{
        return binarySearch(arr,s,mid-1,key);
    }
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(arr)/sizeof(int);
    if(binarySearch(arr,0,size-1,8)){
        cout<<"found"<<endl;
    }else{
        cout<<"Not found"<<endl;
    }
return 0;
}