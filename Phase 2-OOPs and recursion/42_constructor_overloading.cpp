#include<iostream>
using namespace std;
class Person{
    public:
        string name;
        int age;
        Person(){
            cout<<"I am a person"<<endl;
        }
        Person(string s){
            name = s;
            cout<<"My name is "<<name<<endl;
        }
        Person(string s , int n){
            name = s;
            age = n;
            cout<<"My name is "<<this->name<<" and my age is "<<this->age<<endl;
        }
};
int main(){
    Person A;
    Person B("Amar");
    Person C("Chandan", 20);
return 0;
}