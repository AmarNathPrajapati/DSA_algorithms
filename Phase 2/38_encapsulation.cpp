#include<iostream>
using namespace std;
//encapsulation means wrapping of data member and fucntions and the best example is the class.
class Programmer{
    private:
        string name;
        int age;
        string language;
    void testing(){
        cout<<"testing..."<<endl;
    }
};
int main(){
    Programmer p1;
    // p1.testing(); not access bcoz programmer is fully encapsulated class.
return 0;
}