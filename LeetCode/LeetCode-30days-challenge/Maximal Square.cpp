/***************************************
Description: Given a 2D binary matrix filled with 0's and 1's, find the largest square containing only 1's and return its area.

Example:

Input: 

1 0 1 0 0
1 0 1 1 1
1 1 1 1 1
1 0 0 1 0

Output: 4

***************************************/

int maximalSquare(vector<vector<char>>& matrix) {
        int row = matrix.size();
        if(row == 0)
            return 0;
        int col = matrix[0].size();
        if(col == 0)
            return 0;
        
        int maxSqr =0;
        vector<vector<int>> sol(row, vector<int>(col, 0));
        
        for(int i=0; i< row; ++i){
            for(int j=0; j<col; ++j) {
                if(i == 0 || j == 0) {
                    if(matrix[i][j] == '1') {
                        sol[i][j] = 1;
                        maxSqr = max(maxSqr, sol[i][j]);
                    }
                } else {
                    if(matrix[i][j] == '1') {
                        sol[i][j] = 1 + min( {sol[i-1][j-1], sol[i-1][j], sol[i][j-1]} );
                        maxSqr = max(maxSqr, sol[i][j]);
                    }
                }
            }
        }
        
        return maxSqr * maxSqr;
    }