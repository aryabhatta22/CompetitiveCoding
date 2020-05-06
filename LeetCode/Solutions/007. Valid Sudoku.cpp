/***************************************
Description: Determine if a 9x9 Sudoku board is valid. Only the filled cells need to be validated according to the following rules:

Each row must contain the digits 1-9 without repetition.
Each column must contain the digits 1-9 without repetition.
Each of the 9 3x3 sub-boxes of the grid must contain the digits 1-9 without repetition.

A partially filled sudoku which is valid.

The Sudoku board could be partially filled, where empty cells are filled with the character '.'.

Example 1:

Input:
[
  ["5","3",".",".","7",".",".",".","."],
  ["6",".",".","1","9","5",".",".","."],
  [".","9","8",".",".",".",".","6","."],
  ["8",".",".",".","6",".",".",".","3"],
  ["4",".",".","8",".","3",".",".","1"],
  ["7",".",".",".","2",".",".",".","6"],
  [".","6",".",".",".",".","2","8","."],
  [".",".",".","4","1","9",".",".","5"],
  [".",".",".",".","8",".",".","7","9"]
]
Output: true
 
***************************************/


bool isValidSudoku(vector<vector<char>>& board) {
        
        unordered_set<string> _set;
        
        for(int i=0; i<9; i++) {
            for(int j=0; j<9; j++) {
                string el( 1, board[i][j]);
                if(el != ".") {
                    if( _set.find(el+" Found at row "+to_string(i)) == _set.end() &&
                       _set.find(el + " Found at column "+to_string(j)) == _set.end()&&
                       _set.find(el + " Found at grid "+to_string(floor(i/3))+" and "+ to_string(floor(j/3))) == _set.end()) {
                            _set.insert(el + " Found at row "+to_string(i));
                           _set.insert(el + " Found at column "+to_string(j));
                           _set.insert(el + " Found at grid "+to_string(floor(i/3))+" and "+ to_string(floor(j/3)));
                       }else 
                            return false;
                }
            }
        }
        
        return true;
        
    }