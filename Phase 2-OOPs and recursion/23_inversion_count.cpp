// have to code 
#include<iostream>
using namespace std;
void mergeArr(int arr[], int s , int e){
    int mid = s + (e-s)/2;
    //find length of both arr
    int length1 = mid - s +1;
    int length2 = e -mid;
    //create a memory form heap 
    int *first = new int[length1];
    int *second = new int[length2];
    //copy content in first and second array
    int k = s;
    for (int i = 0; i < length1; i++)
    {
        first[i] = arr[k];
        k++;
    }
    k = mid + 1;
    for (int i = 0; i < length2; i++)
    {
        second[i] = arr[k];
        k++;
    }
    //merge two sort array
    int mainIndex = s;
    int i = 0;
    int j = 0;
    while (i<length1 && j<length2)
    {
        if(first[i]<second[j]){
            arr[mainIndex] = first[i];
            mainIndex++;
            i++;
        }else{
            arr[mainIndex] = second[j];
            mainIndex++;
            j++;
        }
    }
    while(i<length1){
        arr[mainIndex] = first[i];
            mainIndex++;
            i++;
    }
    while (j<length2)
    {
        arr[mainIndex] = second[j];
            mainIndex++;
            j++;
    }
    //free memory
    delete []first;
    delete []second;
}
void mergeSort(int arr[], int s , int e){
    //base case
    if(s>=e){
        return ;
    }
    //processing
    int mid = s + (e-s)/2;
    //recurrence relation
    mergeSort(arr,s,mid);//left sort
    mergeSort(arr,mid+1,e);//right part
    //merge
    mergeArr(arr,s,e);
}
int main(){
    int arr[5] = {3,4,1,2,5};
    int size = sizeof(arr)/sizeof(int);
    int s = 0;
    int e = size - 1;
    mergeSort(arr,s,e);
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
return 0;
}