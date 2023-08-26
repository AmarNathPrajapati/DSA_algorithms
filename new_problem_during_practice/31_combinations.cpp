class Solution {
public:
    void solve(int start, int k, vector<int>temp, vector<vector<int>>&ans,int n){
        if(k==0){
            ans.push_back(temp);
            return;
        }
        if(start>n){
            return;
        }
        //include
        temp.push_back(start);
        solve(start+1,k-1,temp,ans,n);
        //exclude
        temp.pop_back();
        solve(start+1,k,temp,ans,n);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int>temp;
        vector<vector<int>>ans;
        solve(1,k,temp,ans,n);
        return ans;
    }
};

//space optimization way

class Solution {
public:
    vector<vector<int>>ans;
    void solve(int start, int k, vector<int>temp,int n){
        if(k==0){
            ans.push_back(temp);
            return;
        }
        if(start>n){
            return;
        }
        for(int i = start; i<=n; i++){
            //include
            temp.push_back(i);
            solve(i+1,k-1,temp,n);
            temp.pop_back();//backtrack
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int>temp;
        solve(1,k,temp,n);
        return ans;
    }
};