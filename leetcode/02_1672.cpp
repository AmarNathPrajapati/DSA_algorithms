#include<bits/stdc++.h>
using namespace std;
int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth=0;
        int row = accounts.size();
        cout<<"row"<<row<<endl;
        int col = accounts[0].size();
        cout<<"col"<<col<<endl;
        for(int i = 0; i< row ; i++){
            int sum=0;
            for(int j= 0; j<col ; j++){
                sum+=accounts[i][j];
            }
            cout<<"sum"<<sum<<endl;
            if(sum>maxWealth){
                maxWealth = sum;
                cout<<"maxWealth"<<maxWealth<<endl;
            }
        }
        return maxWealth;
    }
int main(){
    vector<vector<int>> a = {
        {1,5},
        {7,3},
        {2,6}
    };
    int ans = maximumWealth(a);
    cout<<"Answer"<<ans<<endl;
return 0;
}   