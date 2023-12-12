//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    // n: input to count the number of set bits
    //Function to return sum of count of set bits in the integers from 1 to n.
    int solve(int n){
        if(n==0){
            return 0;
        }
        int p = 0;
        for(int i = 1; i<n; i++){
            if(pow(2,i)>n){
                break;
            }
            p = i;
        }
        return (p*pow(2,p))/2 + (n-pow(2,p)+1) + solve(n-pow(2,p));
    }
    int countSetBits(int n)
    {
        // Your logic here
        int ans =ans+ solve(n);
        return ans;
        
    }
};


//{ Driver Code Starts.

// Driver code
int main()
{
	 int t;
	 cin>>t;// input testcases
	 while(t--) //while testcases exist
	 {
	       int n;
	       cin>>n; //input n
	       Solution ob;
	       cout << ob.countSetBits(n) << endl;// print the answer
	  }
	  return 0;
}

// } Driver Code Ends