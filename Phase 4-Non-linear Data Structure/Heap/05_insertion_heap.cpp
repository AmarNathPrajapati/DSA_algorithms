/*
Implementing the 1-based indexing
*/
#include<iostream>
#include<algorithm>
using namespace std;
class Heap{
    int arr[100];
    int size;
    public:
    Heap(){
        size = 0;
        arr[0] = -1;
    }
    void insert(int val){
        size++;
        int index = size;
        arr[size] = val;
        while(index>1){
            int parent = index/2;
            if(arr[parent]<val){
                swap(arr[parent],arr[size]);
                index = parent;//updating index to find the next parent
            }else{
                return;
            }
        }
    }
    void print(){
        //size 
        for(int i = 1; i<=size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    Heap h;
    h.insert(50);
    h.insert(80);
    h.insert(70);
    h.insert(60);
    h.print();
return 0;
}