#include<iostream>
using namespace std;
class stack{
    public:
    int top;
    int *arr;
    int size;
        stack(int size){
            this->size = size;
            arr = new int[size];
            top=-1;
        }
        //push operation
        void push(int data){
            if(size-top>1){
                top++;
                arr[top] = data;
            }else{
                cout<<"Stack Overflow"<<endl;
            }
        }
        //pop operation
        void pop(){
            if(top>=0){
                top--;
            }else{
                cout<<"Stack underflow"<<endl;
            }
        }
        //top operation
        int peak(){
            if(top>=0){
                return arr[top];
            }else{
                return -1;
            }
        }
        //empty
        bool empty(){
            if(top==-1){
                return true;
            }else{
                return false;
            }
        }
};
int main(){
    int size = 0;
    cout<<"Enter the size: ";
    cin>>size;
    stack s(size);
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
        cout<<s.peak()<<" ";
        s.pop();
    }
    cout<<endl;
    cout<<"is empty "<<s.empty()<<endl; 
return 0;
}