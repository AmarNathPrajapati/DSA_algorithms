/**
 * Heap is complete binary tree with heap property
 * Heap can be implemented using two type: max heap and mean heap
 * for 1 based indexing
 *      root = i
 *      left = 2*i
 *      right =2*i +1;
 *      parent = i/2;
 *      leaf indexing = n/2+1 to n;
 *      heapify loop = n/2 to >0
 * for zero based indexing
 *      root = i
 *      left = 2*i+1
 *      right =2*i +2;
 *      parent = i/2; 
 *      leaf indexing = n/2 to n-1;
 *      heapify loop = n/2-1 to >=0;
*/