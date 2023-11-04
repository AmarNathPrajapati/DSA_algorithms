#include<iostream>
using namespace std;
int solve(int *arr, int size){
    int ans = size;
    for(int i = 0; i<size; i++){
        for(int j = i+1; j<size; j++){
            if(arr[i]<arr[j]){
                ans--;
                break;
            }
        }
    }
    return ans;
}
int main(){
    int arr[] = {2,8 ,9 ,7, 4 ,2};
    int size = sizeof(arr)/sizeof(int);
    int ans = solve(arr,size);
    cout<<"Required ans is: "<<ans<<endl;
return 0;
}