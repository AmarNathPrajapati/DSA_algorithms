// creating max heap using 1 based indexing.
#include<iostream>
using namespace std;
void heapify(int *arr, int size, int i){
    //jo aa raha hai that is consider to be largest value
    int largest = i;//because here max heap is implemented.
    //comparing with left and right child
    int left= 2*i;
    int right = 2*i+1;
    //if comming value is less than any of the child then swap with child.
    if(left<=size && arr[largest]<arr[left]){
        largest = left;
    }
    if(right<= size && arr[largest]<arr[right]){
        largest = right;//changing the index value as per max heap
    }
    //if greater than both child then no change otherwise perform swapping.
    if(largest != i){
        swap(arr[largest],arr[i]);
        heapify(arr,size,largest);//jisko swap karke down level me put kiya hai usko uske right place par pahuchana hai.
    }
}
// heapify is not equivalent to inserting element one by one
int main(){
    int arr[] = {-1,50,80,70,60,90,20,30};
    int size = 7;
    for(int i = size/2; i>0; i--){
        heapify(arr,size,i);
    }
    for(int i = 1; i<=size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

return 0;
}