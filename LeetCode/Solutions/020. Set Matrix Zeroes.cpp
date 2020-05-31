void setZeroes(vector<vector<int>>& matrix) {
        
        bool isRow = false;
        bool isCol = false;
        
        //setting flag
        for(int i=0; i<matrix.size(); i++) {
            for(int j=0; j<matrix[i].size(); j++) {
                if(matrix[i][j] ==  0) {
                    if(i == 0)
                       isRow = true;        // check for first row
                    if(j == 0)
                       isCol = true;        // check for first col
                    matrix[i][0] = 0;   // row
                    matrix[0][j] = 0;   // col
                }
            }
        }
        
        
        // setting values to zero other than row 1 and col 1
        for(int i=1; i<matrix.size(); i++) {
            for(int j=1; j<matrix[i].size(); j++) {
                if(matrix[i][0] == 0 || matrix[0][j] == 0)
                    matrix[i][j] = 0;
            }
        }
        
        
        // for row 1 and col 1
        if(isRow)
            for(int i=0; i<matrix[0].size(); i++)
                matrix[0][i] = 0;
        
        if(isCol)
            for(int i=0; i<matrix.size(); i++)
                matrix[i][0] = 0;
    }