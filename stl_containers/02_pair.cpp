#include<iostream>
#include<utility>
#include<Algorithm>
using namespace std;

int main(){
    pair<int,string> name;
    name.first = 12011051;
    name.second = "Amar Nath";
    cout<<"The roll no of "<<name.second<<" is "<<name.first<<endl;
    //why pair??
    // majorally used for swap of two pari
    pair<int , int> p_arr[3];
    p_arr[0] = {1,4};
    p_arr[1] = {2,5};
    p_arr[2] = {3,6};
    for (int i = 0; i < 3; i++)
    {
        cout<<p_arr[i].first<<"  "<<p_arr[i].second<<endl;
    }
    swap(p_arr[0],p_arr[2]);
    for (int i = 0; i < 3; i++)
    {
        cout<<p_arr[i].first<<"  "<<p_arr[i].second<<endl;
    }
return 0;
}