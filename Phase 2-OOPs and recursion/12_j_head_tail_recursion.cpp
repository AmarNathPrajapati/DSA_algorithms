#include<iostream>
using namespace std;
void count(int n){
    //base condition
    if(n==0){
        return;
    }
    //tail recursion
    cout<<"tail: "<<n<<endl;
    //recurrence relation
    count(n-1);
    //head recurion
    cout<<"head: "<<n<<endl;
}
int main(){
    int n;
    cout<<"Enter the number for count:"<<endl;
    cin>>n;
    count(n);
return 0;
}