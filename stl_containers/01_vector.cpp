//take reference from cpp.com
#include<iostream>
#include<vector>
using namespace std;
// locally array size 10^5 and globally array size is 10^7;
//we can copy the whole vector, but it is not recommended try to use &operator.
void show(vector<int> &v){
    for (int i = 0; i < v.size(); i++)//here vector actual size in use.
    {
        cout<<v[i]<<endl;
    }
}
int main(){
    vector<int> vec1;
    int size;//decided by user
    cout<<"Enter the size of vector"<<endl;
    cin>>size;
    for (int i = 0; i < size; i++)
    {   int a;
        cout<<"Enter the "<<i+1<<"th element in vector"<<endl;
        cin>>a;
        vec1.push_back(a);
    }
    cout<<"Displaying Elements"<<endl;
    show(vec1);

    // vec1.pop_back();
    // before insertion you have to read iterotors, because insert fucntion takes the iterator

    vector<int>::iterator iter = vec1.begin();
    // vec1.insert(iter , 200);
    // vec1.insert(iter+1 , 200);
    vec1.insert(iter+1 ,5, 200);//number of copies
    cout<<"Displaying Elements"<<endl;
    show(vec1);

return 0;
}