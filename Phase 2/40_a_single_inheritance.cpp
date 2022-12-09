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
int main(){
    Programmer amar;
    cout<<"amar.speakSlogan() ";
    amar.speakSlogan();
    cout<<endl<<"amar.speakProgammerSlogan ";
    amar.speakProgrammerSlogan();
return 0;
}