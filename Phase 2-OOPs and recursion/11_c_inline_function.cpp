#include<iostream>
using namespace std;
inline int getMax(int &a,int &b){
    /*bad practice; inline function have at most 2-3 line function
    int val = a;
    int val2 = b;
    int ans;
    if(val>val2){
        ans=val;
    }else{
        ans=val2;
    }
    return ans;
    */
    return ((a>b)?a:b);
}
int main(){
    int a = 10;
    int b = 20;
    cout<<"Inline function call nahi karata, function call to function body se replace kar dete hai..aur bar bar function call ke over head se bachata hai:    "<<getMax(a,b)<<endl;
return 0;
}