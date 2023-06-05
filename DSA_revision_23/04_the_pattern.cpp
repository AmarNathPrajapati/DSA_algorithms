#include<iostream>
using namespace std;

int main(){
    int n = 4;
// Solution 1
    // for (int i = 1; i <=n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }
// Solution 2
    // for (int i = n; i >=1; i--)
    // {
    //     for (int j = n; j >=1; j--)
    //     {
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }
// Solution 3
    // int count = 1;
    // for (int i = 1; i <=n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout<<count<<" ";
    //         count++;
    //     }
    //     cout<<endl;
    // }
// Solution 4
    // for (int i = 1; i <=n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout<<'*'<<" ";
    //     }
    //     cout<<endl;
    // }
// Solution 5
    // for (int i = 1; i <=n; i++)
    // {
    //     for (int j = 1; j <=i; j++)
    //     {
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    // }
// Solution 6
    // int count = 1;
    // for (int i = 1; i <=n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout<<count<<" ";
    //         count++;
    //     }
    //     cout<<endl;
    // }
// Solution 7
    // for (int i = 1; i <=n; i++)
    // {
    //     int count = i;
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout<<count<<" ";
    //         count--;
    //     }
    //     cout<<endl;
    // }
// Solution 8
    // for (int i = 1; i <=n; i++)
    // {
    //     char c = 'A';
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout<<c<<" ";
    //         c++;
    //     }
    //     cout<<endl;
    // }
// Solution 9
    // char c = 'A';
    // for (int i = 1; i <=n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout<<c<<" ";
    //         c++;
    //     }
    //     cout<<endl;
    // }
// Solution 10
    // for (int i = 1; i <=n; i++)
    // {
    //     char c = 'A'+i-1;
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout<<c<<" ";
    //         c++;
    //     }
    //     cout<<endl;
    // }
// Solution 11
    // for (int i = 1; i <=n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout<<i+j-1<<" ";
    //     }
    //     cout<<endl;
    // }
// Solution 12
    // for (int i = 1; i <=n; i++)
    // {
    //     char c = 'A'+i-1;
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout<<c<<" ";
    //     }
    //     cout<<endl;
    // }
// Solution 13
    // char c = 'A';
    // for (int i = 1; i <=n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout<<c<<" ";
    //         c++;
    //     }
    //     cout<<endl;
    // }
// Solution 14
    // for (int i = 1; i <=n; i++)
    // {
    // char c = 'A'+n-i;
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout<<c<<" ";
    //         c++;
    //     }
    //     cout<<endl;
    // }
// Solution 15
    // for (int i = 1; i <=n; i++)
    // {
    //    for (int j = 1; j <= n-i; j++)
    //    {
    //     cout<<" ";
    //    }
    //    for (int k = 1; k <= i; k++)
    //    {
    //     cout<<'*';
    //    }
    //    cout<<endl;
    // }
// Solution 16
    // for (int i = 1; i <=n; i++)
    // {
       
    //    for (int k = 1; k <= n-i+1; k++)
    //    {
    //     cout<<'*';
    //    }
    //    cout<<endl;
    // }
// Solution 17
    // for (int i = 1; i <=n; i++)
    // {
    //    for (int k = 1; k <= i; k++)
    //    {
    //     cout<<" ";
    //    }
    //    for (int j = 1; j <= n-i+1; j++)
    //    {
    //     cout<<"*";
    //    }
    //    cout<<endl;
    // }
// Solution 18
    // for (int i = 1; i <=n; i++)
    // {
    //    for (int k = 1; k <= i-1; k++)
    //    {
    //     cout<<" ";
    //    }
    //    for (int j = 1; j <= n-i+1; j++)
    //    {
    //     cout<<i;
    //    }
    //    cout<<endl;
    // }
// Solution 19
    // for (int i = 1; i <=n; i++)
    // {
    //    for (int k = 1; k <= n-i; k++)
    //    {
    //     cout<<" ";
    //    }
    //    for (int j = 1; j <= i; j++)
    //    {
    //     cout<<i;
    //    }
    //    cout<<endl;
    // }
// Solution 20
    // for (int i = 1; i <=n; i++)
    // {
    //    for (int k = 1; k <= i-1; k++)
    //    {
    //     cout<<" ";
    //    }
    //    int count = i;
    //    for (int j = 1; j <= n-i+1; j++)
    //    {
    //     cout<<count;
    //     count++;
    //    }
    //    cout<<endl;
    // }
// Solution 21
    // int count = 1;
    // for (int i = 1; i <=n; i++)
    // {
    //    for (int k = 1; k <= n-i; k++)
    //    {
    //     cout<<" ";
    //    }
    //    for (int j = 1; j <= i; j++)
    //    {
    //     cout<<count;
    //     count++;
    //    }
    //    cout<<endl;
    // }
// Solution 22
    // for (int i = 1; i <=n; i++)
    // {
    //    for (int k = 1; k <= n-i; k++)
    //    {
    //     cout<<" ";
    //    }
    //    int count = 1;
    //    for (int j = 1; j <= i; j++)
    //    {
    //     cout<<count;
    //     count++;
    //    }
    //    count--;
    //    for (int m = 1; m <= i-1; m++)
    //    {
    //     count--;
    //     cout<<count;
    //    }
    //    cout<<endl;
    // }
// Solution 23
    for (int i = 1; i <=n; i++)
    {
       int count = 1;
       for (int j = 1; j <= n-i+1; j++)
       {
        cout<<count;
        count++;
       }
       for (int k = 1; k <= i-1; k++)
       {
        cout<<'*';
       }
       for (int k = 1; k <= i-1; k++)
       {
        cout<<'*';
       }
       for (int m = 1; m <= n-i+1; m++)
       {
        count--;
        cout<<count;
       }
       cout<<endl;
    }
return 0;
}