#include<iostream>
using namespace std;
class Programmer{
    public:
        string lang;
        void sayLang(){
            cout<<"I am a Programmer"<<endl;
        }
        void sayLang(string s){
            cout<<"My programming language is "<<s<<endl;
        }
};
int main(){
    Programmer amar;
    amar.sayLang();
    amar.sayLang("Cpp");
return 0;
}