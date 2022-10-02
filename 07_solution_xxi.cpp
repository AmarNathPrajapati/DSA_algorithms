#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= i-1; k++)
        {
            cout<<" ";
        }
        int num = i;
        for (int j = 1; j <=n-i+1;j++)
        {
            cout<<num;
            num++;
        }
        cout<<endl;
    }
    
return 0;
}
