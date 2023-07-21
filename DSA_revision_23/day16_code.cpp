//recursive linear search
    // #include<iostream>
    // using namespace std;
    //     bool recLinearSearch(int *arr, int target,int size){
    //         if(size==0){
    //             return false;
    //         }
    //         if(arr[0]==target){
    //             return true;
    //         }
    //         return recLinearSearch(arr+1,target,size-1);
    //     }
    // int main(){
    //     int size = 6;
    //     int arr[] = {1,2,3,6,7,0};
    //     int target = 4;
    //     if(recLinearSearch(arr,target,size)){
    //         cout<<"Found"<<endl;
    //     }else{
    //         cout<<"NOt found"<<endl;
    //     }
    // return 0;
    // }

//Recursive Binary Search
    // #include<iostream>
    // using namespace std;
    //     bool recBinarySearch(int *arr, int target,int s, int e){
    //         int mid = s + (e-s)/2;
    //         if(s>e){
    //             return false;
    //         }
    //         if(arr[mid]==target){
    //             return true;
    //         }else if(arr[mid]<target){
    //             return recBinarySearch(arr,target,mid+1,e);
    //         }else{
    //             return recBinarySearch(arr,target,s,mid-1);
    //         }
    //     }
    // int main(){
    //     int size = 6;
    //     int arr[] = {1,2,3,6,7};
    //     int target = 6;
    //     int s = 0;
    //     int e = size-1;
    //     if(recBinarySearch(arr,target,s,e)){
    //         cout<<"Found"<<endl;
    //     }else{
    //         cout<<"NOt found"<<endl;
    //     }
    // return 0;
    // }

//find the power of num in log(n)
    // #include<iostream>
    // using namespace std;
    //     int fastPower(int x, int n){
    //         if(n==0){
    //             return 1;
    //         }
    //         if(n==1){
    //             return x;
    //         }
    //         int ans = fastPower(x,n/2);
    //         if(n&1){
    //             return x*ans*ans;
    //         }else{
    //             return ans*ans;
    //         }
    //     }
    // int main(){
    //     int a = 2;
    //     int n = 10;
    //     cout<<fastPower(2,10);
    // return 0;
    // }