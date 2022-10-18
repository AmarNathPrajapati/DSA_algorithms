#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &v, int num)
{
    int s = 0;
    int e = v.size() - 1;
    while (s <= e)
    {
        // int mid = (s + e) / 2;
        /* let's optimise and secure the binary search
        if mid and e are equal to 2^30 then sumation may excee  the limit then use this formula for 
        calculation of the mid
        */
        int mid = s + (e-s)/2;
        if (v[mid] == num)
        {
            return mid;
        }
        else if (v[mid] > num)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
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
    // cout<<*(v.begin())<<endl;

    return 0;
}