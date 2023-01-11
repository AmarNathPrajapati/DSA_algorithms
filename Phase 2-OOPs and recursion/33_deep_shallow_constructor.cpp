#include<iostream>
using namespace std;
// change observe karne ke liye same pointer ka hona jaroori hai.
// sallow copy me pointer address same hota hai.
// deep copy me we have to create a different pointer for different variable in own custom copy constructor
class Hero{
public:
    string name;
    Hero(string s){
        name=s;
    }
};
int main(){
    Hero chandan("amar");
    Hero golu("amar nath");
    //copy assignment operator
    chandan = golu;
    cout<<"chandan.name "<<chandan.name<<endl;
    cout<<"golu.name "<<golu.name<<endl;
    //copy assignment operator
    
return 0;
}