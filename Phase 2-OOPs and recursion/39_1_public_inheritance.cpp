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
class Man : public Human{
    public:
        string wife_name;
    int get_total_property(){
        return total_property;//protected property
    }
};
int main(){
    Man a;
    cout<<"a.name "<<a.name<<endl; // public property by public mode in public
    cout<<"a.age "<<a.age<<endl;
    cout<<"a.get_total_salary: "<<a.get_total_property()<<endl;
return 0;
}