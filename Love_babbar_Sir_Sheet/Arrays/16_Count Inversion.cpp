//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long int merge1(int s, int e, int mid, long long int arr[], long long int temp[]){
        long long int ans = 0;
        long long int i = s;
        long long int k = s;
        long long int j = mid;
        while((i<=mid-1)&&(j<=e)){
            if(arr[i]<=arr[j]){
                temp[k++] = arr[i++];
            }else{
                temp[k++] = arr[j++];
                ans += mid-i;
            }
        }
        while(i<=mid-1){
            temp[k++] = arr[i++];
        }
        while(j<=e){
            temp[k++] = arr[j++];
        }
        for(int m = s; m<=e; m++){
            arr[m] = temp[m];
        }
        return ans;
    }
    long long int mergeSort(int s, int e, long long int arr[], long long int temp[]){
        long long int ans = 0;
        if(e>s){
            int mid = s + (e-s)/2;
            ans+=mergeSort(s,mid,arr,temp);
            ans+=mergeSort(mid+1,e,arr,temp);
            ans+=merge1(s,e,mid+1,arr,temp);
        }
        return ans;
    }
    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        long long int temp[N];
        return mergeSort(0,N-1,arr,temp);
    }

};

//{ Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}

// } Driver Code Ends