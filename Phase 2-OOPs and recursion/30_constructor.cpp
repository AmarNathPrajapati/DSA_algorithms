#include<iostream>
using namespace std;
class Hero{
    public:
    string name;
    int age;
    Hero(){
        cout<<"New Hero Created"<<endl;
    }
    Hero(string s, int n){
        name = s;
        age = n;
    }
    
};
int main(){
    Hero chandan("Amar",20);
    cout<<"chandan.name "<<chandan.name<<endl;
    cout<<"chandan.age "<<chandan.age<<endl;
    Hero *golu = new Hero("Pandit",20);
    cout<<"golu.name "<<golu->name<<endl;
    cout<<"golu.age "<<golu->age<<endl;
return 0;
}