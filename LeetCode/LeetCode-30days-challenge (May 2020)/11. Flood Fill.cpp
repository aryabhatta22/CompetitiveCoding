/***************************************
Description: An image is represented by a 2-D array of integers, each integer representing the pixel value of the image (from 0 to 65535).

Given a coordinate (sr, sc) representing the starting pixel (row and column) of the flood fill, and a pixel value newColor, "flood fill" the image.

To perform a "flood fill", consider the starting pixel, plus any pixels connected 4-directionally to the starting pixel of the same color as the starting pixel, plus any pixels connected 4-directionally to those pixels (also with the same color as the starting pixel), and so on. Replace the color of all of the aforementioned pixels with the newColor.

At the end, return the modified image.

Example 1:
Input: 
image = [[1,1,1],[1,1,0],[1,0,1]]
sr = 1, sc = 1, newColor = 2
Output: [[2,2,2],[2,2,0],[2,0,1]]
Explanation: 
From the center of the image (with position (sr, sc) = (1, 1)), all pixels connected 
by a path of the same color as the starting pixel are colored with the new color.
Note the bottom corner is not colored 2, because it is not 4-directionally connected
to the starting pixel.
***************************************/

vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        
        queue<pair<int,int>> q;
        q.push(make_pair(sr,sc));
        int color = image[sr][sc];
        
        if( color == newColor)
            return image;
        
        while(!q.empty()) {
            pair<int,int> cell = q.front();
            int row = cell.first;
            int col = cell.second;
     
            //cout<<row<<" - "<<col<<" : "<<color<<endl;
            
            if(row -1 >=0 && image[row -1][col] == color)   // up
                q.push(make_pair(row-1,col));
            if(row +1 < image.size() && image[row +1][col] == color)   // down
                q.push(make_pair(row+1,col));
            if(col -1 >=0 && image[row][col -1] == color)   // left
                q.push(make_pair(row,col -1));
            if(col +1 < image[row].size() && image[row][col+1] == color)   // right
                q.push(make_pair(row,col+1));
            
            image[row][col] = newColor;
            q.pop();
            
        }
        
        return image;
    }