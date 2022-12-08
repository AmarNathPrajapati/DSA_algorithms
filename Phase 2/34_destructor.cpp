#include<iostream>
using namespace std;
class Hero{
    public:
        string name;
        int age;
        Hero(string s, int n){
            name = s;
            age = n;
        }
        ~Hero(){
            cout<<"constructor nahi Distructor Hoo mai"<<endl;
        }
};
int main(){
    Hero chandan("Amar", 20);
    cout<<"chandan.name " <<chandan.name<<endl;
    Hero *golu = new Hero("Amar Nath",20);
    cout<<"golu->age "<<golu->age<<endl;
    delete golu;//manually invoked distructor

return 0;
}