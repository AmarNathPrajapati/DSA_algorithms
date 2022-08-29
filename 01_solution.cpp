#include<iostream>
using namespace std;
template <class T>
class vector{
    public:
        T *arr;
        int size;
        vector (int m){
            size = m;
            arr = new T[size];
        }
        T dotProduct(vector &v){
            T sum = 0;
            for (int i = 0; i < size; i++)
            {
                sum += this->arr[i] * v.arr[i];
            }
            return sum;
        }
};
int main(){
    double s1,s2;
    cout<<"Enter The size of first vector"<<endl;
    cin>>s1;
    vector<double> v1(s1);
    for (int i = 0; i < s1; i++)
    {
        double a;
        cout<<"Enter the value for "<<i+1<<"th "<< "axis"<<endl;
        cin>>a;
        v1.arr[i]=a;
    }
    cout<<"Enter The size of second vector"<<endl;
    cin>>s2;
    vector<double> v2(s2);
    for (int i = 0; i < s2; i++)
    {
        double b;
        cout<<"Enter the value for "<<i+1<<"th "<< "axis"<<endl;
        cin>>b;
        v2.arr[i]=b;
    }
    double dot_product = v1.dotProduct(v2);
    cout<<"Answer is "<<dot_product;
return 0;
}