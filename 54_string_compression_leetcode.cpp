class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0;
        int ai = 0;
        int n = chars.size();
        //traversing array
        while(i<n){
            int j = i+1;
            while(j<n && chars[i]==chars[j]){
                j++;//if match increment j for count
            }
            chars[ai] = chars[i];
            ai++;
            int count = j-i;
            if(count>1){
                string cnt = to_string(count);
                for(char ch: cnt){
                    chars[ai] = ch;
                    ai++;
                }
            }
            i=j;
        }
        return ai;
    }
};