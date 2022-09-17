#include<iostream>
#include<set>
using namespace std;

int main(){
    multiset<int> m;
    m.insert(4);
    m.insert(14);
    m.insert(34);
    m.insert(4);
    m.insert(14);
    m.insert(14);
    m.insert(4);
    cout<<m.count(4)<<endl;
    //other funciton like set, but here repeatited value are allowed.
return 0;
}