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
void reverseString(char name[],int size){
    int s = 0;
    int e = size-1;
    while (s<e)
    {
        swap(name[s++],name[e--]);
    }
    
}
int main(){
    char name[20];
    cout<<"Enter your name"<<endl;
    cin>>name;
    cout<<"your name is "<<name<<endl;
    int length = lengthString(name);
    cout<<"length of the name is "<<length<<endl;
    cout<<"reversing the string..... "<<endl;
    reverseString(name,length);
    cout<<name;
return 0;
}