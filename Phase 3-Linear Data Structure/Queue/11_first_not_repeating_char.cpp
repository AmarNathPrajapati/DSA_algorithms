//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
		    // Code here
		    unordered_map<char,int>count;//to store the count of the each letter
		    queue<int>q;
		    string ans = "";
		    for(int i = 0; i<A.length(); i++){
		        char ch = A[i];
		        count[ch]++;//increment the count of that vowel
		        q.push(ch);//store in queue
		        while(!q.empty()){
		            //if repeating 
		            if(count[q.front()]>1){
		                q.pop();
		            }else{
		                ans.push_back(q.front());
		                break;
		            }
		        }
		        if(q.empty()){
		            ans.push_back('#');
		        }
		    }
		    return ans;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends