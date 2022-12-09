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
        void speakSlogan(){
            cout<<"I am Programmer"<<endl;
        }
};
class JSDeveloper : public Programmer, public Person{
    public:
        string level;
};
int main(){
    JSDeveloper chandan;
    chandan.level = "Intermediate";
    chandan.Programmer::speakSlogan();
    chandan.Person::speakSlogan();
return 0;
}