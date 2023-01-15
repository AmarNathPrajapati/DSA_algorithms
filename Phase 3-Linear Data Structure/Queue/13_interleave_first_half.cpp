#include <bits/stdc++.h> 
void interLeaveQueue(queue < int > & q) {
    // Write your code here.
    queue<int> q2;
    int mid = q.size()/2;
    for(int i = 0; i<mid; i++){
        int num = q.front();
        q.pop();
        q2.push(num);
    }
    while(!q2.empty()){
        int num = q2.front();
        q2.pop();
        q.push(num);
        num = q.front();
        q.pop();
        q.push(num);
    }
}