/*steps : find pivot
if index element>pivot
binary search in right part
and if index of element<pivot_index
binary search in left part
*/
#include<bits/stdc++.h>
using namespace std;
int binarySearch(vector<int> &v,int s, int e, int target)
{
    int mid = s + (e-s)/2;
    while (s <= e)
    {
        if (v[mid] == target)
        {
            return mid;
        }
        else if (v[mid] > target)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return -1;
}
int searchElement(vector<int> &v, int pivot,int target){
    int size = v.size();
    if(v[pivot]<=target && target<=v[size-1]){
        int s = pivot;
        int e = size-1;
        int ans = binarySearch(v, s,e,target);
        return ans;
    }else{
        int s = 0;
        int e = pivot-1;
        int ans = binarySearch(v, s,e,target);
        return ans;
    }
}
int findPivot(vector<int> &v){
    int s = 0;
    int e = v.size() -1;
    int mid = s + (e-s)/2;
    while (s<e)
    {
        if(v[mid]>v[0]){
            s = mid + 1;
        }else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
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
    cout<<"Enter the target element"<<endl;
    int target;
    cin>>target;
    int pivot = findPivot(v);
    int answer = searchElement(v,pivot,target);
    cout<<"target find at index "<<answer<<endl;
return 0;
}