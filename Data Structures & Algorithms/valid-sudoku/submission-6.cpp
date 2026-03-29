class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int,unordered_map<char,int>> rows;
        unordered_map<int,unordered_map<char,int>> cols;
        unordered_map<int,unordered_map<char,int>> grids;
        for(int i =0;i<9;i++){
         for(int j =0;j<9;j++){
            if(board[i][j] == '.'){
               continue;
            }
            rows[i][board[i][j]]++;
            cols[j][board[i][j]]++;
            int grid_index = (i/3 * 3 )+ j/3;
            grids[grid_index][board[i][j]]++;
            if(rows[i][board[i][j]] > 1 || cols[j][board[i][j]] > 1 || grids[grid_index][board[i][j]] > 1){
               return false;
            }
         }
        }
        return true;

    }
};
