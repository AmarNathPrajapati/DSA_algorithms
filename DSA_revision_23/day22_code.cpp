#include<bits/stdc++.h>
using namespace std;
    void selectionSort(int *arr,int n){
        for(int i = 0; i<n-1; i++){
            int minIndex=i;
            for(int j = i+1; j<n; j++){
                if(arr[j]<arr[minIndex]){
                    minIndex = j;
                }
            }
            swap(arr[minIndex],arr[i]);
        }
    }
    void bubbleSort(int *arr,int n){
        for(int i = 0; i<n-1; i++){
            for(int j = 0; j<n-i; j++){
                if(arr[j]>arr[j+1]){
                    swap(arr[j],arr[j+1]);
                }
            }
        }
    }
    void insertionSort(int*arr, int n){
        for(int i = 1; i<n; i++){
            int temp = arr[i];
            int j;
            for(j = i-1; j>=0; j--){
                if(arr[j]>temp){
                    arr[j+1] = arr[j];
                }else{
                    break;
                }
            }
            arr[j+1] = temp;
        }
    }
    int noOfPrime(int n){
        vector<int>v(10+1,true);
        v[0] = v[1] = false;
        int count = 0;
        for(int i = 2; i<n; i++){
            if(v[i]){
                count++;
                for(int j = i*2; j<=n; j = j+i){
                    v[j] = false;
                }
            }
        }
        return count;
    }
    int gcd(int a, int b){
        int num = max(a,b);
        int den = min(a,b);
        int rem = num%den;
        while(rem != 0){
            num = den;
            den = rem;
            rem = num%den;
        }
        return den;
    }
    int power(int a, int n){
        int ans = 1;
        while(n>0){
            if(n&1){
                ans = ans*a;
            }
            a = a*a;
            n= n>>1;
        }
        return ans;
    }
    bool checkPalindrome(string s){
        int i = 0;
        int j = s.length()-1;
        while (i<j)
        {
            if(s[i++] != s[j--]){
                return false;
            }
        }
        return true;
    }
    bool linearSearch(int arr[][4], int target){
        int row = 3;
        int col = 4;
        for(int i = 0; i<row; i++){
            for(int j = 0; j<col; j++){
                if(arr[i][j] == target){
                    return true;
                }
            }
        }
        return false;
    }
int main(){
    // int arr[5] = {10,2,4,3,5};
    // cout<<"Before sorting.....";
    // for(int i = 0; i<5; i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    // selectionSort(arr,5);
    // bubbleSort(arr,5);
    // insertionSort(arr,5);
    // int n = noOfPrime(10);
    // cout<<"No of prime numbers are: "<<n<<endl;
    // cout<<"After sorting.....";
    // for(int i = 0; i<5; i++){
    //     cout<<arr[i]<<" ";
    // }
    // int g = gcd(12,8);
    // cout<<"gcd of two number: "<<g<<endl;
    // int p = power(2,10);
    // cout<<"power of number is: "<<p<<endl;
    // string s = "abcabcba";
    // if(checkPalindrome(s)){
    //     cout<<"String is palindrome"<<endl;
    // }else{
    //     cout<<"String is not palindrome"<<endl;
    // }
    int row = 3;
    int col = 4;
    int arr[row][4];
    int count = 0;
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            arr[i][j] = count;
            count++;
        }
    }
    if(linearSearch(arr,20)){
        cout<<"found"<<endl;
    }else{
        cout<<"Not found"<<endl;
    }
return 0;
}