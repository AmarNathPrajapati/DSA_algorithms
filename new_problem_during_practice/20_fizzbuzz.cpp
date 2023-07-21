class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string>ans;
        for(int i =1; i<=n; i++){
            string temp;
            if(i%3==0 && i%5==0){
                temp = "FizzBuzz";
                ans.push_back(temp);
            }
            else if(i%3==0){
                temp = "Fizz";
                ans.push_back(temp);
            }else if(i%5==0){
                temp = "Buzz";
                ans.push_back(temp);
            }else{
                temp = to_string(i);
                ans.push_back(temp);
            }
        }
    return ans;
    }
};