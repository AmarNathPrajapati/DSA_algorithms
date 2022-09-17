#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<string> q;
    q.push("amar");
    q.push("chandan");
    q.push("pramod");
    q.push("sagar");
    q.push("sahil");
    q.push("arjun");
    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }
return 0;
}