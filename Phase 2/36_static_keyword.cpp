#include<iostream>
using namespace std;
class Man{
    public:
        string name;
        int age;
        static int initial_life;
        static int get_life(){
            return initial_life;
        }
};
int Man::initial_life = 100;
int main(){
    cout<<"Man::initial_life "<<Man::initial_life<<endl;
    Man chandan;
    cout<<"chandan.initial_life "<<chandan.initial_life<<endl;
    cout<<"Man::get_life() "<<Man::get_life()<<endl;
return 0;
}