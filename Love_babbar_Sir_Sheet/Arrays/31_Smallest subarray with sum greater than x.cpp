//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:

    int smallestSubWithSum(int arr[], int n, int x)
    {
        // Your code goes here   
        int curr = 0;
        int ip = 0;
        int dp = 0;
        int mini = INT_MAX;
        while(ip<n){
            while(curr<=x && ip<n){
                curr = curr + arr[ip];
                ip++;
            }
            while(curr>x && dp<n){
                if(ip-dp<mini){
                    mini = ip-dp;
                }
                curr = curr-arr[dp];
                dp++;
            }
        }
        return mini==INT_MAX?0:mini;
    }
};

//{ Driver Code Starts.

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution obj;
		cout<<obj.smallestSubWithSum(a,n,x)<<endl;
	}
	return 0;
}
// } Driver Code Ends