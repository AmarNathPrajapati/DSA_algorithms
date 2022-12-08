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
    //custom copy constructor
    Programmer(Programmer &temp){
        cout<<"My copy constructor is invoked"<<endl;
        cout<<"this "<<this<<endl;
        this->age = temp.age;
        this->name = temp.name;
    }

};
int main(){
    Programmer p1("Amar",20);
    cout<<"p1.name "<<p1.name<<endl;
    cout<<"p1.age "<<p1.age<<endl;
    //copy constructor
    Programmer p2(p1);//by default copy constructor is present in the class
    cout<<"p2.age "<<p2.age<<endl;
    cout<<"p2.name "<<p2.name<<endl;
    //thru custom copy constructor
    Programmer p3(p1);
    cout<<"p3.age "<<p3.age<<endl;
    cout<<"p3.name "<<p3.name<<endl;
    //direct assign(copy)
    Programmer temp = p1;
    cout<<"temp.name "<<temp.name<<endl;
    cout<<"temp.age "<<temp.age<<endl;
return 0;
}