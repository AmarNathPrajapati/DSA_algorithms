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
class Programmer: public Person{
    public:
        string language;
        void speakProgrammerSlogan(){
            cout<<"I am Programmer"<<endl;
        }
};
class JSDeveloper : public Programmer{
    public:
        string level;
        string language = "javaScript";
};
int main(){
    JSDeveloper chandan;
    chandan.level = "Intermediate";
    // chandan.language = "JS";
    cout<<"chandan.level "<<chandan.level<<endl;
    cout<<"chandan.language "<<chandan.language<<endl;
    cout<<"chandan.speakSlogan(): ";
    chandan.speakSlogan();
    cout<<"chandan.speakProgrammerSlogan(): ";
    chandan.speakProgrammerSlogan();
return 0;
}