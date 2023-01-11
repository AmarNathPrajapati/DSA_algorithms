#include <bits/stdc++.h>
using namespace std;
void insertionSort(int arr[], int size){
    cout << endl
         << "Insertion Sort running....." << endl;
    // base condition
    if (size == 0 || size == 1)
    {
        return;
    }
    //rr
    insertionSort(arr,size-1);
    // processing
    int temp = arr[size-1];
    int j;
    for (j = size-2; j >= 0; j--)
    {
        if (arr[j] > temp)
        {
            arr[j + 1] = arr[j];
        }
        else
        {
            break;
        }
    }
    arr[j + 1] = temp; // define j outside

}
int main(){
    int arr[] = {3, 4, 1, 2, 5, 4, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(int);
    int s = 0;
    int e = size - 1;
    insertionSort(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}