#include<iostream>
#include<unordered_set>
using namespace std;
void show(unordered_set<int> &u){
    for(auto &val : u){
        cout<<val<<" ";
    }
    cout<<endl;
}
int main(){
    unordered_set<int> u;
    u.insert(4);
    u.insert(5);
    u.insert(5);
    u.insert(15);
    u.insert(6);
    u.insert(4);
    u.insert(9);
    show(u);
    //method find(),erase() are same as set.
return 0;
}