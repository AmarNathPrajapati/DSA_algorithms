#include<bits/stdc++.h>
using namespace std;
int numberOfPrime(int n){
    vector<bool>v(n+1,true);
    v[0] = v[1] = false;
    int count = 0;
    for(int i=2;i<=n;i++){
        if(v[i]){
            count++;
            for (int j = i*2; j <n; j=j+i)
            {
                v[j]=false;
            }
        }
    }
    return count;
}
int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    cout<<"Number of prime is "<<numberOfPrime(n);
    
return 0;
}