#include<iostream>
using namespace std;

int reach(int s , int d){
    cout<<"step: "<<s<<endl;
    //base condition
    if(s==d){
        return true;
    }
    return reach(s+1,d);
}
int main(){
    int source, destination;
    cout<<"Enter the source and destination: "<<endl;
    cin>>source>>destination;
    if(reach(source,destination)){
        cout<<"reached"<<endl;
    }
return 0;
}   