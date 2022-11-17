#include<bits/stdc++.h>
using namespace std;
                                            //selection sort means select minimum element and replace ith position
void selection_sort(int arr[], int size){
    cout<<"Selection Sort running......"<<endl;
    //base condition
    if(size==0 || size == 1){
        return;
    }
    //processing
    int minIndex = 0;                    // hamne maan liya ith position wala sabse minimum element hai.
    for (int j = minIndex+1; j < size; j++) // if i is minimum, then checking start from i+1 check till last element
    {   
       if(arr[minIndex]>arr[j]){            // agar minIndex jth index se bada hai to 
            minIndex = j;               //minIndex ki value j ke barabar kar do.
       }
    }
    swap(arr[minIndex],arr[0]);             //finally ith position ki jagah minimum element rakh do(swap kar do)
    //rr
    selection_sort(arr+1,size-1);
    
}
int main(){
    int arr[] = {3,4,1,2,5,4,6,7,8,9};
    int size = sizeof(arr)/sizeof(int);
    int s = 0;
    int e = size - 1;
    selection_sort(arr,size);
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
return 0;
}