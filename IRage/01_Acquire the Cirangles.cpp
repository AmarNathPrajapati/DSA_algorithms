#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long D,F,S,K;
		cin>>D>>F>>S>>K;
		if (K == 1) 
		{
			cout<<D + F + S<<endl;
			continue;
		}
	   
       long long x = ((long long) K * (K + 1) / 2)/3;
       
       //case 1
	   if ((K % 3) == 0 || (K % 3) == 2)
	    {
			cout<<min(D, min(F, S))/ x<<endl;
			continue;
		} 
    
	   
	   //case 2
	   long long l = 0, r = D + F + S, m, result = 0;
	   
	   while (l <= r) {
            m = (l + r) / 2;
            if (min(D, min(F, S)) / x >= m && D + F + S - 3 * x * m >= m) {
                result = m;
                l = m + 1;   
            }
            else r = m - 1;
        }
	   
	   cout<<result<<endl;
	}
}
//accepted solution
//c++17