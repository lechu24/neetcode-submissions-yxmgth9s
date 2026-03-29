class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int,unordered_map<char,int>> row;
        unordered_map<int,unordered_map<char,int>> col;
        unordered_map<int,unordered_map<char,int>> grid;
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j] != '.'){
                row[i][board[i][j]]++;
                col[j][board[i][j]]++;
                int gridIndex = (i/3)*3 + j/3;
                grid[gridIndex][board[i][j]]++;
                if(row[i][board[i][j]] >1 || col[j][board[i][j]] >1  || grid[gridIndex][board[i][j]] >1 ){
                    return false;
                }
                }
            }
        }
        return true;

    }
};
