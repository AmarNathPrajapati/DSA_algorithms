#include<iostream>
using namespace std;
class Human{
    private:
        int salary;//private can't be inherited.
    protected:
        int total_property = 1000;
    public:
        string name = "Manushya";
        int age = 70;
};
class Man : protected Human{ 
    public:
        string wife_name;
    int get_total_property(){
        return total_property;//protected property
    }
    string get_name(){
        return name;
    }
    int get_age(){
        return age;
    }
};
int main(){
    Man a;
    // cout<<"a.name "<<a.name<<endl; in protected public and proctected both in protected.
    // cout<<"a.age "<<a.age<<endl;
    cout<<"a.get_name() "<<a.get_name()<<endl;// in protected public and proctected both in protected.
    cout<<"a.get_age() "<<a.get_age()<<endl;
return 0;
}   