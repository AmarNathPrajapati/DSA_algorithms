/**
 * brute force solution
 * #include<bits/stdc++.h>
int getKthLargest(vector<int> &arr, int k)
{
	//	Write your code here.
	//brute force solution
	//s1: restore all possible sum in the array
	vector<int> sumStore;
	int size = arr.size();

	for(int i = 0; i<size; i++){
		int sum = 0;
		for(int j = i; j<size; j++){
			sum += arr[j];
			sumStore.push_back(sum);
		}
	}
	//s2: sort that array
	sort(sumStore.begin(),sumStore.end());
	//s3: return [size-k]
	return sumStore[sumStore.size()-k];
}
*/
#include<bits/stdc++.h>
int getKthLargest(vector<int> &arr, int k)
{
	//	Write your code here.
	// s1: create a min heap
	priority_queue<int, vector<int>, greater<int>>minHeap;
	// s2: push k element in the heap
	int size= arr.size();
	for(int i = 0; i<size; i++){
		int sum = 0;
		for(int j = i; j<size; j++){
			sum +=arr[j];
			if(minHeap.size()<k){
				minHeap.push(sum);
			}else if(sum>minHeap.top()){
					minHeap.pop();
					minHeap.push(sum);
			}
		}
	}
	// s3: for more than k element
	return minHeap.top();
}






// //brute force solution
// 	//s1: restore all possible sum in the array
// 	vector<int> sumStore;
// 	int size = arr.size();

// 	for(int i = 0; i<size; i++){
// 		int sum = 0;
// 		for(int j = i; j<size; j++){
// 			sum += arr[j];
// 			sumStore.push_back(sum);
// 		}
// 	}
// 	//s2: sort that array
// 	sort(sumStore.begin(),sumStore.end());
// 	//s3: return [size-k]
// 	return sumStore[sumStore.size()-k];