#include<bits/stdc++.h>
using namespace std;  
  
int main()  
{  
  set<int> a = {4,9,5};  
  set<int> b = {4,8,9};  
  vector<int> result;  
  set_intersection(a.begin(), a.end(), b.begin(), b.end(),  inserter(result, end(result)));  
  
//   set_intersection(begin(a), end(a),  
//                  begin(b), end(b),  
//                  inserter(result, end(result)));  
  
  for(int &val:result){
    cout<<val<<" ";
  }
cout<<endl;
    
return 0;
}