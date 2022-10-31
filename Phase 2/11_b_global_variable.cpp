#include<iostream>
using namespace std;

int i = 5;
void ai(){
    int i = 5555;
    cout<<"i inside ai: "<<i<<endl;
}
void bi(){
    i = 1111;
    cout<<"i inside bi: "<<i<<endl;
}
int main(){
    ai();
    int i = 55;
    bi();
    {
        cout<<"bahar wala global i: "<<::i<<endl;
        int i = 555;
        cout<<"i in block: "<<i<<endl;
    }
    cout<<"i out block but in main(): "<<i<<endl;
return 0;
}