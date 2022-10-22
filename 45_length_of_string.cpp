//concept of character array
#include<bits/stdc++.h>
using namespace std;
int lengthString(char name[]){
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
int main(){
    char name[20];
    cout<<"Enter your name"<<endl;
    cin>>name;
    cout<<"your name is "<<name<<endl;
    int length = lengthString(name);
    cout<<"length of the name is "<<length<<endl;
return 0;
}