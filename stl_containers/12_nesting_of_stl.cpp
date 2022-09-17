#include<iostream>
#include<set>
#include<map>
#include<utility>
using namespace std;

int main(){
    cout<<"hello"<<endl;
    map<pair<int,int>,int> m;
    m.insert({{1,2},2});
    m.insert({{2,2},4});
    m.insert({{1,3},6});
    m.insert({{4,2},3});
    m.insert({{1,5},7});
    map<pair<int,int>,int>::iterator it=m.begin();
    cout<<m[{1,2}]<<endl;

return 0;
}