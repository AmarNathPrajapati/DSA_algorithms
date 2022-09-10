#include <iostream>
#include <vector>
#include <utility>
using namespace std;
void show(vector<pair<int, int>> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }
}
int main()
{
    vector<pair<int, int>> v_pair;
    // define a static value
    // v_pair = {
    //     {1, 2}, {2, 5}, {5, 7}
    // };
    //take dynamic value
    int size;
    cout<<"Enter the size of vector"<<endl;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout<<"enter the first and second value of the pair"<<endl;
        int a,b;
        cin>>a>>b;
        pair<int,int> temp_pair={a,b};
        v_pair.push_back(temp_pair);
    }

    // traversal
    show(v_pair);
    return 0;
}