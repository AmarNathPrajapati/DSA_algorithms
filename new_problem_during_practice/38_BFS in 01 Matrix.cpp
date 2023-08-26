class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        //create a result vector with -1
        int row = mat.size();
        int col = mat[0].size();
        //for BFS
        queue<pair<int,int>>q;
        //for direction vector
        vector<pair<int,int>>dir = {{0,1},{1,0},{-1,0},{0,-1}};
        vector<vector<int>>result(row,vector<int>(col,-1));
        //store co-ordinate of all zero
        for(int i = 0; i<row; i++){
            for(int j = 0;j<col; j++){
                if(mat[i][j]==0){
                    result[i][j] = 0;
                    q.push({i,j});
                }
            }
        }
        //Hit BFS from those co-ordinate
        while(!q.empty()){
            pair<int,int>p = q.front();
            q.pop();
            int i = p.first;
            int j = p.second;
            for(auto val: dir){
                int new_x = i + val.first;
                int new_y = j + val.second;
                if((new_x>=0 && new_x<row)&&(new_y>=0 && new_y<col)&&(result[new_x][new_y]==-1)){
        //Keep updating the result
                    result[new_x][new_y] = result[i][j]+1;
                    q.push({new_x,new_y});
                }
            }
        }
        return result;
    }
};