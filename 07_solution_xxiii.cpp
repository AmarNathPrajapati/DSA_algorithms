#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= n-i; k++)
        {
            cout<<" ";
        }
        
        for (int j = 1; j <=i;j++)
        {
            cout<<j;
        }
        // int num = i-1;
        // for (int t = 1; t <= i-1; t++)
        // {
        //     cout<<num;
        //     num--;
        // }
        
        // alternative method of commented part

        int start = i-1;
        while (start)
        {
            cout<<start;
            start--;
        }
        
        cout<<endl;
    }
    
return 0;
}
