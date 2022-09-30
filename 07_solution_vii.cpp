#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the number"<<endl;
    int n;
    cin>>n;
    cout<<"Desired Pattern"<<endl;
    int count = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j >= 1; j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
return 0;
}