#include <bits/stdc++.h>
using namespace std;

int greater_than_0(int x)
{
    return x > 0;
}
int main()
{
    // lambda functions
    auto dbe = [](int x)
    { return x * 2; };
    cout << dbe(4) << endl;
    vector<int> v = {1, 2, 4, 5, 6, 4, 3};
    cout << all_of(v.begin(), v.end(), greater_than_0)<<endl;//true if all true
    cout << any_of(v.begin(), v.end(), greater_than_0)<<endl;//true if any true
    cout << none_of(v.begin(), v.end(), greater_than_0)<<endl;//true if all false
    return 0;
}