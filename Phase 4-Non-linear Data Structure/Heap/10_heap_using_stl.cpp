#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// stl max heap push pop provide element is decreasing order
// stl min heap push pop provide element is increasing order
int main(){
    //creating max heap on every push
    priority_queue<int> pq;
    pq.push(50);
    pq.push(80);
    pq.push(70);
    pq.push(60);
    pq.push(90);
    pq.push(20);
    pq.push(30);
    while(!pq.empty()){
        int top = pq.top();
        cout<<top<<" ";
        pq.pop();
    }
    cout<<endl;
    //creating min heap on every pop
    priority_queue<int, vector<int> , greater<int>>pq1;
    pq1.push(50);
    pq1.push(80);
    pq1.push(70);
    pq1.push(60);
    pq1.push(90);
    pq1.push(20);
    pq1.push(30);
    while(!pq1.empty()){
        int top = pq1.top();
        cout<<top<<" ";
        pq1.pop();
    }
    cout<<endl;

return 0;
}