// class Solution {
// public:
//     int largestVariance(string s) {
//         int size = s.length();

//         unordered_map<char,int>c;
//         for(int i = 0;i<size;i++){
//             int index = s[i]-'a';
//             c[index]++;
//         }
//         int cs = c.size();
//         bool one = true;
//         for(int i = 0; i<cs; i++){
//             if(c[i] != 1){
//                 one = false;
//             }
//         }
//         if(one){
//             return 0;
//         }
//         int ans = 0;
//         for(int i = 0; i<size; i++){
//             unordered_map<char,int>count;
//             for(int j = i; j<size; j++){
//                 int index = s[j]-'a';
//                 count[index]++;
//             }
//             int countSize = count.size();
//             int mini = INT_MAX;
//             int maxi = INT_MIN;
//             for(int k = 0;k<countSize;k++){
//                 mini = min(mini,count[k]);
//                 maxi = max(maxi,count[k]);
//             }
//             ans = max(ans,maxi-mini);
//         }
//         return ans;
//     }
// };

class Solution {
 public:
  int largestVariance(string s) {
    int ans = 0;

    for (char c1 = 'a'; c1 <= 'z'; ++c1)
      for (char c2 = 'a'; c2 <= 'z'; ++c2)
        if (c1 != c2)
          ans = max(ans, kadane(s, c1, c2));

    return ans;
  }

 private:
  // A := the char w/ higher freq
  // B := the char w/ lower freq
  int kadane(const string& s, char a, char b) {
    int ans = 0;
    int countA = 0;
    int countB = 0;
    bool canExtendPrevB = false;

    for (const char c : s) {
      if (c != a && c != b)
        continue;
      if (c == a)
        ++countA;
      else
        ++countB;
      if (countB > 0) {
        // An interval should contain at least one b
        ans = max(ans, countA - countB);
      } else if (countB == 0 && canExtendPrevB) {
        // Edge case: consider previous b
        ans = max(ans, countA - 1);
      }
      // Reset if # of b > # of a
      if (countB > countA) {
        countA = 0;
        countB = 0;
        canExtendPrevB = true;
      }
    }

    return ans;
  }
};

