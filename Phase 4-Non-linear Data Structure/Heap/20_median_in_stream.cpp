#include<bits/stdc++.h>
	//s3: declare a signum functions
	//it tell 
	int signum(int a, int b){
		if(a==b){
			return 0;
		}else if(a>b){
			return 1;
		}else if(a<b){
			return -1;
		}
	}
	//s4: to calculate median using signum functions
	void callMedian(int &element,
	priority_queue<int> &maxHeap,
	priority_queue<int,vector<int>, greater<int>>&minHeap, 
	int &median){
		switch(signum(maxHeap.size(),minHeap.size())){
			case 0:
			//when both left and right have equal number of element and next element get odd postion
				if(element>median){//after size will be even
					minHeap.push(element);
					median = minHeap.top();
				}else{
					maxHeap.push(element);
					median = maxHeap.top();
				}
				break;
			//when next element have even postion.
			case 1:
				if(element>median){//maxheap size greater than min
					minHeap.push(element);
					median = (minHeap.top() + maxHeap.top())/2;
					
				}else{
					minHeap.push(maxHeap.top());
					maxHeap.pop();
					maxHeap.push(element);
					median = (minHeap.top() + maxHeap.top())/2;
				}
				break;
			case -1:
				if(element>median){//minheap have greate size
					maxHeap.push(minHeap.top());
					minHeap.pop();
					minHeap.push(element);
					median = (minHeap.top() + maxHeap.top())/2;
				}else{
					maxHeap.push(element);
					median = (minHeap.top() + maxHeap.top())/2;
				}
				break;
		}
	}
vector<int> findMedian(vector<int> &arr, int n){
	
	// Write your code here 
	//s1: declare ans(vector), min and max heap, median
	vector<int> ans;
	priority_queue<int> maxHeap;
	priority_queue<int,vector<int>, greater<int>>minHeap;
	int median = 0;
	//s2: call a function which calculate median and push into array and return ans;
	for(int i = 0; i<n; i++){
		callMedian(arr[i],maxHeap,minHeap,median);
		ans.push_back(median);
	}
	return ans;
	
	//s5: solve for different cases.
}
