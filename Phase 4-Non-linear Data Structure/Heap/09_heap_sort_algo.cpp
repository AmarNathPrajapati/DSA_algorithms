//heap sort = heapify either max heap or min heap + heapSort
// max heap : ascending order
// min heap: descending order
// creating max heap using 1 based indexing.
#include<iostream>
using namespace std;
void heapify(int *arr, int size, int i){
    //jo aa raha hai that is consider to be largest value
    int largest = i;
    int left= 2*i;
    int right = 2*i+1;
    if(left<=size && arr[largest]<arr[left]){
        largest = left;
    }
    if(right<= size && arr[largest]<arr[right]){
        largest = right;
    }
    if(largest != i){
        swap(arr[largest],arr[i]);
        heapify(arr,size,largest);
    }
}
void heapSort(int arr[], int size){
    while(size>1){
        swap(arr[size],arr[1]);//swapping largest node to last node
        size--;//remove largest node and store at last place.
        heapify(arr,size,1);//again convert rest element into max heap.
    }

}
// heapify is not equivalent to inserting element one by one
int main(){
    int arr[] = {-1,50,80,70,60,90,20,30};
    int size = 7;
    //no need to process leaf node because leaf are already sorted.
    for(int i = size/2; i>0; i--){
        heapify(arr,size,i);//convert array to heap 
    }
    heapSort(arr,size);
    for(int i = 1; i<=size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

return 0;
}