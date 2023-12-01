//{ Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


// } Driver Code Ends
/*Complete the function below*/
#include<bits/stdc++.h>
class Solution {
public:
    bool checkPalin(vector<int>v){
        int n = v.size();
        int i  = 0;
        int j = n-1;
        while(i<j){
            if(v[i]!=v[j]){
                return false;
            }
            i++;j--;
        }
        return true;
    }
    int PalinArray(int a[], int n)
    {
    	// code here
    	for(int i = 0; i<n; i++){
    	    vector<int>temp;
    	    int num = a[i];
    	    while(num){
    	        int digit = num%10;
    	        temp.push_back(digit);
    	        num = num/10;
    	    }
    	    if(!checkPalin(temp)){
    	        return false;
    	    }
    	}
    	return true;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}
// } Driver Code Ends