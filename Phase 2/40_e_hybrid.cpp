#include<iostream>
using namespace std;
class Person{
    public:
        string name;
        int age;
    void speakSlogan(){
        cout<<"Mai aam aadami hoon"<<endl;
    }
};
class Manager{
    public:
        string manageDb;
};
class Programmer: public Person{
    public:
        string language;
        void speakProgrammerSlogan(){
            cout<<"I am Programmer"<<endl;
        }
};
class JSDeveloper :public Person,public Manager{
    public:
        string level;
};
int main(){
    JSDeveloper chandan;
    chandan.level = "Intermediate";
    // chandan.language = "JS";
    cout<<"chandan.level "<<chandan.level<<endl;
    chandan.name = "Amar Nath";
    cout<<"chandan.name "<<chandan.name<<endl;
    chandan.manageDb = "Manage Employee Database";
    cout<<"chandan.manageDb "<<chandan.manageDb<<endl;
return 0;
}