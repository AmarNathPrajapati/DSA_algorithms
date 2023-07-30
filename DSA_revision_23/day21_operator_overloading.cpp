#include<iostream>
using namespace std;
class Student{
    public:
        int a;
        Student(int num){
            this->a = num;
        }
        void operator-(Student temp){
            cout<<this->a - temp.a<<endl;
        }
};
int main(){
    
return 0;
}