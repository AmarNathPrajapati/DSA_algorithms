#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"Enter the number"<<endl;
    int n;
    cin>>n;
    cout<<"Desired Pattern"<<endl;
    //method 1
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = i*n-(n-1); j <= i*n; j++)
    //     {
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }
    int count = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
    
return 0;
}