#include<iostream>
using namespace std;
void rotate(int arr[], int s, int e){
    int temp = arr[e];
    for(int i = e; i>s; i--){
        arr[i] = arr[i-1];
    }
    arr[s] = temp;
}
void solve(int arr[], int size){
    int k = 0;
    while(k<size){
        if(arr[k]<0 && k%2==0 || arr[k]>0 && k%2!=0){
            k++;
            continue;
        }
        if(arr[k]>0 && k%2==0){
            int i = k;
            int j = k;
            while(i<size && arr[i]>0){
                i++;
            }
            if(i>=size){
                return;
            }
            rotate(arr,j,i);
        }else if(arr[k]<0 && k%2!=0){
            int i = k;
            int j = k;
            while(j<size && arr[j]<0){
                j++;
            }
            if(j>=size){
                return;
            }
            rotate(arr,i,j);
        }
        k++;
    }
}
int main(){
    int arr[] = {1, 2, 3, -4, -1, 4};
    int size = sizeof(arr)/sizeof(int);
    solve(arr,size);
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }

return 0;
}