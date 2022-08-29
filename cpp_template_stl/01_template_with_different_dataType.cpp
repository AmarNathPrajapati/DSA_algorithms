#include<iostream>
using namespace std;
//different datatypes
template <class T1, class T2>
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
int main(){
    MyClass<string,int> amar("Chandan", 20);
    amar.about();
return 0;
}