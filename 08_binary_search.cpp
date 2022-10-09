#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &v, int num)
{
    int low = 0;
    int high = v.size() - 1;
    while (low <= high)
    {
        // int mid = (low + high) / 2;
        /* let's optimise and secure the binary search
        if mid and high are equal to 2^30 then sumation may excee  the limit then use this formula for 
        calculation of the mid
        */
        int mid = low + (high-low)/2;
        if (v[mid] == num)
        {
            return mid;
        }
        else if (v[mid] > num)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}
int main()
{
    vector<int> v;
    cout << "Enter the size of vector" << endl;
    int size;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the " << i + 1 << "th element in the vector" << endl;
        int num;
        cin >> num;
        v.push_back(num);
    }
    int index = binarySearch(v,5);
    if(index+1){
        cout<<"Element found at "<<index<<" index"<<endl;
    }else{
        cout<<"Not found";
    }

    /*  inbuilt binary search
    if(binary_search(v.begin(),v.end(),5)){
        cout<<"found";
    }else{
        cout<<"Not found";
    }*/

    return 0;
}