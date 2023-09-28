#include <iostream>
#include<bits/stdc++.h>
#include <iostream>
#include <utility>
#include <algorithm>
#include <vector>
using namespace std;
 
bool compare(const pair<int, int>&i, const pair<int, int>&j)
    {
    	if(i.first == j.first){
    		return i.second > j.second;
		}   
        	
	
		
		return i.first < j.first;
    }
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 
int main(int argc, char** argv) {
	
	int i,index,t,cost,gain,m[100005];
	vector <pair<int,int > > x;
	
	cin >> t;
	for(i=0;i<t;i++){
		cin >> cost >> gain; 
		x.push_back(make_pair(cost,gain));
		
	}
	
	sort(x.begin(),x.end(),compare);
	long long int min_bal = 0 ,avail_bal = 0 ;
	for(i=0;i<t;i++){
		cost = x[i].first;
		gain = x[i].second;
		//gain = m[index] ;
		
		if(avail_bal > cost){
		//	cout << cost <<"  " << gain << endl;
			avail_bal += (gain - cost);
			
				
		}  
		else{
			//cout << cost <<"  " << gain << endl;
			min_bal += (cost - avail_bal);
			avail_bal = gain ;
		}
		
		
	}
	printf("%lld",min_bal);
	return 0;
}
// language: c++ partially accepted
