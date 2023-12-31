//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        int xors = 0;
        int n = nums.size();
        for(int i = 0; i<n; i++){
            xors = xors ^ nums[i];
        }
        int right_bit = xors & ~(xors-1);
        int x=0, y= 0;
        for(int i = 0; i<n; i++){
            if(nums[i]&right_bit){
                x = x^nums[i];
            }else{
                y = y^nums[i];
            }
        }
        vector<int>ans;
        int mini = min(x,y);
        int maxi = max(x,y);
        ans.push_back(mini);
        ans.push_back(maxi);
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}
// } Driver Code Ends