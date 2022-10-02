#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        // triangle 1
        for (int j = 1; j <=n-i+1;j++)
        {
          cout<<j;
        }
        // priting desired * pattern
        for (int s = 1; s <= i-1; s++)
        {
            cout<<"*";
        }
        for (int s = 1; s <= i-1; s++)
        {
            cout<<"*";
        }
        
        // triangle 2 i.e. mirror image of triangle 1
        int val = n-i+1 ;
        for (int k = 1; k <= n-i+1; k++)
        {
            cout<<val;
            val--;
        }
        
        cout<<endl;
    }
    
return 0;
}
