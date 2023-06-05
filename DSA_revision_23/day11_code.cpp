#include<iostream>
using namespace std;

int main(){

//check the mutability of char array and string (both are mutable)
    // char name[20]="amar_nath";
    // name[0]='A';
    // cout<<name<<endl;
    // string name2="chandan";
    // name2[0]='D';
    // cout<<name2<<endl;

//comparision the size of char array and string of same value
    // char name[12]="q"; --------->12 due to [12byte]
    // string name2="qafapofipapfiafiasfiasfaspfafkfpakl;fskp'fkaopsd"; ---------->32byte always
    // cout<<"sizeof(name): "<<sizeof(name)<<endl;
    // cout<<"sizeof(name2): "<<sizeof(name2)<<endl;

//Reverse the array after the given index
    // void reverseArray(vector<int> &arr , int m)
    // {
    // 	// Write your code here.
    // 	int s = m+1;
    // 	int e = arr.size()-1;
    // 	while(s<e){
    // 		swap(arr[s++],arr[e--]);
    // 	}

// Reverse the String in O(1) time and space complexity
    // Write your code here.
        // int s = 0;
        // int e = str.length()-1;
        // while(s<e){
        // 	swap(str[s++],str[e--]);
        // }
        // return str;
    // }

// Book allocation problem or the concept of minimun number of pages assign to student to minimum
    // bool isPossibleSol(vector<int>& arr, int n, int m,int mid){
    //     int pageCount = 0;
    //     int studentCount = 1;
    //     for(int i = 0; i<n; i++){
    //         if(pageCount+arr[i]<=mid){
    //             pageCount +=arr[i];
    //         }else{
    //             studentCount++;
    //             if(studentCount>m|| arr[i]>mid){
    //                 return false;
    //             }
    //             pageCount = arr[i];
    //         }
    //     }
    //     return true;
    // }

    // int findPages(vector<int>& arr, int n, int m) {
    //     // Write your code here.
    //     if(m>n){
    //         return -1;
    //     }
    //     int s = 0;
    //     int sum = 0;
    //     for(int i = 0; i< n; i++){
    //         sum +=arr[i];
    //     }
    //     int e = sum;
    //     int ans = -1;
    //     while(s<=e){
    //         int mid = s + (e-s)/2;
    //         if(isPossibleSol(arr,n,m,mid)){
    //             ans = mid;
    //             e = mid-1;
    //         }else{
    //             s = mid + 1;
    //         }
    //     }
    //     return ans;
    // }
    // return 0;
    // }