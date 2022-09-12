#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> l1;
    list<int> l2(5);
    //inserting the value in list1
    l1.push_back(5);
    l1.push_back(3);
    l1.push_back(2);
    l1.push_back(7);
    //remember: for iteration use iterator for safe
    list<int>::iterator it;
    for(it=l1.begin();it!=l1.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    // ninja technique for iteration
    
    //updating the value in list2 because it is inialized with zero.
    // ninja technique for iteration
   
    int i = 0;
    for( it = l2.begin();it !=l2.end() ; it++){
        *it = i+1;
        i++;
    }

    for(int &lst:l2){
        cout<<lst<<" ";
    }
    cout<<endl;
    //list methods
    l1.pop_front();
    l1.sort();
    l2.sort();//sorting
    l1.merge(l2);//mergin
    l1.reverse();//reversing
    l1.remove(3);
    for(int &lst:l1){
        cout<<lst<<" ";
    }
    cout<<endl;
return 0;
}