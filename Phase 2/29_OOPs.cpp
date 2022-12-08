#include<iostream>
#include "29(g).cpp"
using namespace std;
class Hero{
    int health;
    int value;
    double stage;
    public:
        void setHealth(int health1){
            health = health1;
        }
        void setValue(int value1){
            value = value1;
        }
        int getHealth(){
            return health;
        }
        int getValue(){
            return value;
        }
};
class Villon{
   
};
int main(){
    Hero chandan;
    cout<<"Size of the object "<<sizeof(chandan)<<endl;//8
    Villon paul;
    cout<<"size of the empty object "<<sizeof(paul)<<endl;//1 to track the object
    Programmer amar;
    cout<<"The name and age of Programmer "<<amar.name<<" and "<<amar.age<< endl;
    chandan.setHealth(90);
    chandan.setValue(10);
    cout<<"Chandan health "<<chandan.getHealth()<<endl;
    cout<<"Chandan value "<<chandan.getValue()<<endl;
    Hero *golu = new Hero;
    golu->setValue(11);
    cout<<"value of the golu "<<golu->getValue()<<endl;
return 0;
}