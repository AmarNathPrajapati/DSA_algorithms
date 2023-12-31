//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
		vector<string> AllPossibleStrings(string s){
		    // Code here
		    int  n = s.size();
		    int n1 = pow(2,n)-1;
		    vector<string>ans;
		    for(int i = 1; i<=n1; i++){
		        int n2 = i;
		        int j = 0;
		        string temp = "";
		        while(n2){
		            int bit = n2&1;
		            if(bit==1){
		                temp = temp + s[j];
		            }
		            j++;
		            n2 = n2>>1;
		        }
		        ans.push_back(temp);
		    }
		    sort(ans.begin(),ans.end());
		    return ans;
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}
// } Driver Code Ends