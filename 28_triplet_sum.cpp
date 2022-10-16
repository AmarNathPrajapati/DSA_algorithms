#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                for(int k = j+1; k<nums.size(); k++){
                    if(nums[i] + nums[j]+ nums[k] == 0){
                        vector<int> temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[j]);
                        temp.push_back(nums[k]);
                        ans.push_back(temp);
                        
                        break;
                    }
                }
            }
        }
        return ans;
    }
int main(){
    int size;
    cout<<"Enter the size of vector"<<endl;
    cin>>size;
    vector<int> v;
    for(int i=0; i<size; i++){
        cout<<"Enter the "<<i+1<<" element in vector"<<endl;
        int num;
        cin>>num;
        v.push_back(num);
    }
    vector<vector<int>> ans = threeSum(v);
    for(auto val:ans){
        for(int i:val){
            cout<<i<<" ";
        }
    }
return 0;
}