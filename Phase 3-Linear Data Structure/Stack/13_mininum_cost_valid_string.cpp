int findMinimumCost(string str) {
  // Write your code here
     stack<char> s;
    if(str.size() %2 == 1){
        return -1;
    }else{
        //removing valid pairs
        for(int i = 0; i<str.size(); i++){
            char ch = str[i];
            if(ch=='{'){
                s.push(ch);
            }else{
                if( !s.empty() && s.top()=='{'){//help to find the minimum cost
                    s.pop();//if already in pair remove
                }//pushing invalid
                else{
                    s.push(ch);
                }
            }
        }
    }
    int a = 0, b = 0;
        while (!s.empty()){
            if(s.top()=='{'){
                b++;
            }else{
               a++;
            }
            s.pop();
        }
    int ans =( a+1)/2 + (b+1)/2;
    return ans;
}