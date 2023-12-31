//program to write find maximum and minimum in array
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1,2,32,222,4,2,3,2,343,2,22,2,3,5,4,5,4,3};
    //using most optimized way
    int maxi  = INT_MIN;
    int mini = INT_MAX;
    int size = sizeof(arr)/sizeof(int);
    for(int i = 0; i<size; i++){
        if(arr[i]>maxi){
            maxi = arr[i];
        }
        if(arr[i]<mini){
            mini = arr[i];
        }
    }
    cout<<"Maximum element in array is: "<<maxi<<endl;
    cout<<"Minimum element in array is: "<<mini<<endl;
    return 0;
    
}