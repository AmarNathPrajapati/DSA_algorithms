#include<iostream>
using namespace std;
/**
 * macro- space,readbility,updation easily,can't change in program
*/
#define pi 3.14
#define areaRect(l,b)(l*b)
#define maxVal(a,b)((a>b)?a:b)
#define element 1,\
                2,\ 
                3
int main(){
    int r = 5;
    cout<<"Area of circle: "<<pi*r*r<<endl;
    // pi = pi + 1;//error
    int l = 3, b = 4;
    cout<<"Area of rectangle is: "<<areaRect(l,b)<<endl;
    cout<<"maximum b/w l and b is: "<<maxVal(l,b)<<endl;
    int arr[] = {element};
    for (int i = 0; i < 3; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
return 0;
}