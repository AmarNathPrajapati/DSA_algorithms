#include<iostream>
#include<algorithm>
using namespace std;
void bubbleSort(int arr[],int size){
    //base case
    if(size==0 || size==1){
        return ;
    }
    //processing
    for (int i = 0; i < size; i++)
    {
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    //recurrence relation
    bubbleSort(arr,size-1);
}
int main(){
    int arr[5] = {3,4,1,2,5};
    int size = 5;
    bubbleSort(arr,size);
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
return 0;
}   