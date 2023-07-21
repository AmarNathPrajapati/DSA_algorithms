void solve(stack<int> &s, int count, int size){
    //base case
    if(count==size/2){
        s.pop();
        return;
    }
    //num ko side me rakho.
    int num = s.top();
    s.pop();
    //recursive call
    solve(s,count+1,size);
    s.push(num);
}
void deleteMiddle(stack<int>&inputStack, int N){
	
   // Write your code here
    int count = 0;
    solve(inputStack,count,N);
}