#include<iostream>
using namespace std;
//this keyword it is the pointer point to the current object i.e. it contains the address of that object
class Programmer{
    public:
     string name;
     int age;
     Programmer(string name,int age){
        this->name = name;
        this->age = age;
        cout<<"this "<<this<<endl;
     }
};
int main(){
    Programmer p1("Amar",20);
    cout<<"p1.name "<<p1.name<<endl;
    cout<<"p1.age "<<p1.age<<endl;
return 0;
}