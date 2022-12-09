#include<iostream>
using namespace std;
class Person{
    public:
        int a;
        Person(int n){
            a =n;
        }
        void operator+(Person temp){
            cout<<this->a-temp.a<<endl;
        }
};
int main(){
    Person P(5);
    Person Q(2);
    cout<<"P+Q      ";
    P+Q;
return 0;
}