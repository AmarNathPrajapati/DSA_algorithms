#include <bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int> nums, int target)
{
    vector<int> ans;
    for (int i = 0; i < nums.size(); i++)
    {
        cout << "i wala loop" << endl;
        cout << nums[i] << endl;
        int j;
        for (j = i + 1; j < nums.size(); j++)
        {
            cout << "j wala loop" << endl;
            cout << nums[j] << endl;
            if (nums[i] + nums[j] == target && i < j)
            {
                ans.push_back(i);
                ans.push_back(j);
                break;
            }
        }
        if (nums[i] + nums[j] == target)
        {
            break;
        }
    }
    return ans;
}
int main()
{
    int size;
    cout << "Enter the size of vector" << endl;
    cin >> size;
    vector<int> v;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the " << i + 1 << " element in vector" << endl;
        int num;
        cin >> num;
        v.push_back(num);
    }
    int target;
    cout << "Enter the value of target" << endl;
    cin >> target;
    vector<int> tsum;
    tsum = twoSum(v, target);
    for (int val : tsum)
    {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}