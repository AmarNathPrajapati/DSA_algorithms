#include<iostream>
using namespace std;
void printArray(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
bool linearSearch(int arr[], int size,int key){
    //behind the scene
    printArray(arr,size);
    //base conditions
    if(size==0){
        return false;
    }
    if(arr[0]==key){
        return true;
    }
    //recurrence relation
    bool ans = linearSearch(arr+1,size-1,key);
    return ans;
}
int main(){
    int arr[] = {1,2,3,4,5,6};
    int size = sizeof(arr)/sizeof(int);
    if(linearSearch(arr,size,8)){
        cout<<"found"<<endl;
    }else{
        cout<<"Not found"<<endl;
    }
return 0;
}