#include<bits/stdc++.h>
using namespace std;
void my_swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
void dutch_flag(vector<int>&nums){
    int n = nums.size();
    int i = 0; 
    int m = 0;
    int j = n-1;
    while(m<=j){
        if(nums[m]==0){
            my_swap(nums[i],nums[m]);
            i++;m++;
        }else if(nums[m]==1){
            m++;
        }else {
            my_swap(nums[j],nums[m]);
            j--;
        }
    }
}
int main(){
    vector<int> nums = {0,0,1,2,0,1,2,1,2};
    cout<<"After applying dutch flag algorithm..."<<endl;
    dutch_flag(nums);
    for(auto val: nums){
        cout<<val<<" ";
    }
    return 0;
}