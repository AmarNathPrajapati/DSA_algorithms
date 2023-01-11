#include<bits/stdc++.h>
using namespace std;
void update(int**p2){
    // p2 = p2 + 1;
    // *p2 = *p2 +1;
    **p2 = **p2+1;
}
int main(){
    int i =5;
    int *p = &i;//to point any variable, use its data type and add *;
    int** p2 = &p;//double pointer

    cout<<"i: "<<i<<endl;
    cout<<"*p: "<<*p<<endl;
    cout<<"**p2: "<<**p2<<endl;
    cout<<endl;
    cout<<"&i: "<<&i<<endl;
    cout<<"p: "<<p<<endl;
    cout<<"*p2: "<<*p2<<endl;
    cout<<endl;
    cout<<"&p: "<<&p<<endl;
    cout<<"p2: "<<p2<<endl;
    cout<<endl;
    cout<<"&p2: "<<&p2<<endl;

    //multilevel pointer
    int** *p3= &p2;
    cout<<"p3: "<<p3<<endl;
    cout<<"Before function calling..."<<endl;
    cout<<"p2: "<<p2<<endl;
    cout<<"*p2: "<<*p2<<endl;
    cout<<"**p2: "<<**p2<<endl;
    update(p2);
    cout<<"After function called..."<<endl;
    cout<<"p2: "<<p2<<endl;
    cout<<"*p2: "<<*p2<<endl;
    cout<<"**p2: "<<**p2<<endl;


return 0;
}   