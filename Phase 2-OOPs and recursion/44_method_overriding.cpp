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
        void speakSlogan(){//overriding
            cout<<"I am Programmer"<<endl;
        }
};
int main(){
    Programmer chandan;
    chandan.speakSlogan();
return 0;
}