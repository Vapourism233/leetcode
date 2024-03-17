class Solution {
public:
    bool isValidRow(vector<char>& row){
        int checker = 0, num = 0;
        for(int i = 0; i < 9; i++){
            if(row[i] != '.'){
                num = row[i] - '0';
                if((checker & (1 << num)) > 0){
                    return false;
                }
                checker = (checker | (1 << num));
            }
        }
        return true;
    }

    bool isValidColumn(vector<vector<char>>& board, int j){
        int checker = 0, num = 0;
        
        for(int i = 0; i < 9; i++){
            if(board[i][j] != '.'){
                num = board[i][j] - '0';
                if((checker & (1 << num)) > 0){
                    return false;
                }
                checker = checker | (1 << num);
            }
        }
        return true;
    }

    bool isValidCell(vector<vector<char>>&  board, int n, int m){
        int checker = 0, num = 0;

        for(int i = n; i < n + 3; i++){
            for(int j = m; j < m + 3; j++){
                if(board[i][j] != '.'){
                    num = board[i][j] - '0';
                    if((checker & (1 << num)) > 0){
                        return false;
                    }
                    checker = checker | (1 << num);
                }
            }
        }
        return true;
    }

    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i = 0; i < 9; i++){
            if(!isValidRow(board[i])){
                return false;
            }
        }

        for(int i = 0; i < 9; i++){
            if(!isValidColumn(board, i)){
                return false;
            }
        }

        for(int i = 0; i < 9; i += 3){
            for(int j = 0; j < 9; j += 3){
                if(!isValidCell(board, i, j)){
                    return false;
                }
            }
        }

        return true;
    }
};
