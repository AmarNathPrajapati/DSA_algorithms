// class Solution {
// public:
//     bool compare(string s1, string s2){
//         int i = 0;
//         int j = 0;
//         bool match = true;
//         while(i<s1.length()){
//             if(s1[i] != s2[j]){
//                 match = false;
//             }
//             i++;
//             j++;
//         }
//         return match;
//     }
//     bool buddyStrings(string s, string goal) {
//         int size1 = s.size();
//         int size2 = goal.size();
//         if(size1 != size2){
//             return false;
//         }
//         //swap and check
//         for(int i = 0; i<size1; i++){
//             for(int j = i+1;j<size1;j++){
//                 swap(s[i],s[j]);
//                 if(compare(s,goal)){
//                     return true;
//                 }
//                 //backtrack
//                 swap(s[i],s[j]);
//             }
//         }
//         return false;
//     }
// };

class Solution {
public:
    bool buddyStrings(string s, string goal) {
        int n = s.length();
        if(s == goal){
            set<char> temp(s.begin(), s.end());
            return temp.size() < goal.size(); // Swapping same characters
        }

        int i = 0;
        int j = n - 1;

        while(i < j && s[i] == goal[i]){
            i++;
        }

        while(j >= 0 && s[j] == goal[j]){
            j--;
        }

        if(i < j){
            swap(s[i], s[j]);
        }
        return s == goal;
    }
};