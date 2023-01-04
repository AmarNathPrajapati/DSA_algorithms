#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> s;
    int size = 0;
    cout<<"Enter the size: ";
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        int data = 0;
        cout<<"Enter the data: "<<endl;
        cin>>data;
        s.push(data);
    }
    cout<<"is empty "<<s.empty()<<endl;
    cout<<"Printing the stack........."<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    cout<<"is empty "<<s.empty()<<endl; 
    
return 0;
}