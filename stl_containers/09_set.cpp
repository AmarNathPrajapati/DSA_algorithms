#include<iostream>
#include<set>
using namespace std;
//unique value with order,no need of occurance or I mean it is not a key-value pair like 
void display(set<int> &s){
    for(auto &val:s){
        cout<<val<<" ";
    }
    cout<<endl;
}
int main(){
    set<int> s;
    s.insert(5);
    s.insert(4);
    s.insert(4);
    s.insert(4);
    s.insert(8);
    s.insert(8);
    s.insert(8);
    s.insert(9);
    s.insert(10);
    s.insert(9);
    s.insert(12);
    set<int>::iterator it;
    it = s.find(9);
    if(it != s.end()){
        cout<<"found"<<endl;
    }else{
        cout<<"not found"<<endl;
    }
    it = s.find(4);
    s.erase(it);
    if(it != s.end()){
        cout<<"found"<<endl;
    }else{
        cout<<"not found"<<endl;
    }
    //erase
    s.erase(9);

    display(s);
return 0;
}