#include<iostream>
using namespace std;
//different datatypes
template <class T1=string, class T2=int>
class MyClass{
    public:
    T1 name;
    T2 age;
    MyClass(T1 a, T2 b){
        name = a;
        age = b;
    }
    void about(){
        cout<<"The "<<name<<" is "<< age <<" years old "<<endl;
    }
};
//different datatypes
template <class T1=string, class T2=int>
class MyClass2{
    public:
    T1 name;
    T2 age;
    MyClass2(T1 a, T2 b){
        name = a;
        age = b;
    }
    void about(){
        cout<<"The "<<name<<" is "<< age <<" years old "<<endl;
    }
};
int main(){
    MyClass<> amar("Chandan", 20);
    amar.about();
    MyClass2<> amar1("Chandan", 20);
    amar1.about();
return 0;
}