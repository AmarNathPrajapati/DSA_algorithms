#include<iostream>
#include<algorithm>
using namespace std;
int partition(int arr[],int s, int e){
    //seletct first
    int pivot = arr[s];
    //find count
    int count = 0;
    //find position and swap
    for (int i = s; i<e; i++)
    {
        if(arr[i]<pivot){
            count++;
        }
    }
    int p = s + count;
    swap(arr[s],arr[p]);//imp
    //left sort  //right sort
    int i = s;
    int j = e;
    while (i<p && j>p)
    {
        while(arr[i]<arr[p]){
            i++;
        }
        while(arr[j]>arr[p]){
            j--;
        }
        if(i<p && j>p){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }

    }
    return p;
}
void quickSort(int arr[],int s, int e){
    //base case
    if(s>=e){
        return ;
    }
    //processing
    int p  = partition(arr,s,e);
    //rr
    quickSort(arr,s,p-1);//left part
    quickSort(arr,p+1,e);//right part
}
int main(){
    int arr[5] = {3,4,1,2,5};
    int size = sizeof(arr)/sizeof(int);
    int s = 0;
    int e = size - 1;
    quickSort(arr,s,e);
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
return 0;
}