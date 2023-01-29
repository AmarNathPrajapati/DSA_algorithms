/**
 * approach 1
 * #include<bits/stdc++.h>
string longestCommonPrefix(vector<string> &arr, int n)
{
    // Write your code here
    //approach 1
    string ans = "";
    for(int i = 0; i<arr[0].length(); i++){
        char ch = arr[0][i];
        bool match = false;
        for(int j = 1; j<n; j++){//for next string
            if(arr[j].size()<i || ch != arr[j][i]){
                match = false;
                break;
            }else{
                match = true;
            }
        }
        if(match == false){
            break;
        }else{
            ans.push_back(ch);
        }
    }
    return ans;
}
*/
