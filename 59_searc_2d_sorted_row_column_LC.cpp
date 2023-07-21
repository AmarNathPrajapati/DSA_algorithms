class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        
        int rIndex = 0;
        int cIndex = col-1;
        while(rIndex<row && cIndex>=0){
            int element = matrix[rIndex][cIndex];
            if(element == target){
                return 1;
            }
            if(element>target){
                cIndex--;
            }else{
                rIndex++;
            }
        }
        return 0;
    }
};