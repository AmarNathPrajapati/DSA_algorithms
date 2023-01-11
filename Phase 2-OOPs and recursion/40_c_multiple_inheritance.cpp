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
class Programmer{
    public:
        string language;
        void speakProgrammerSlogan(){
            cout<<"I am Programmer"<<endl;
        }
};
class JSDeveloper : public Programmer, public Person{
    public:
        string level;
        string language = "java";
};
int main(){
    JSDeveloper chandan;
    chandan.level = "Intermediate";
    // chandan.language = "JS";
    cout<<"chandan.level "<<chandan.level<<endl;
    cout<<"chandan.language "<<chandan.language<<endl;
return 0;
}