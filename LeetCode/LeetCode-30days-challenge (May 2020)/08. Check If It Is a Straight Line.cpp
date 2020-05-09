/***************************************
Description: You are given an array coordinates, coordinates[i] = [x, y], where [x, y] represents the coordinate of a point. Check if these points make a straight line in the XY plane.

 

 

Example 1:



Input: coordinates = [[1,2],[2,3],[3,4],[4,5],[5,6],[6,7]]
Output: true
Example 2:



Input: coordinates = [[1,1],[2,2],[3,4],[4,5],[5,6],[7,7]]
Output: false
 
***************************************/

class Solution {
public:
    
     bool onLine(double m, int x1, int y1, int x, int y) {
         
         if((y - y1) == (m*(x-x1)))
             return true;
         else 
             return false;
         
     }
    
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        
        if(coordinates.size() == 2)
            return true;
        
        int x1 = coordinates[0][0];
        int y1 = coordinates[0][1];
        int x2 = coordinates[1][0];
        int y2 = coordinates[1][1];
        
        double m = (1.0*(y2 - y1))/(x2 -x1);
        
        for(int i=2; i<coordinates.size(); i++) {
            if(onLine(m, x1, y1,coordinates[i][0] , coordinates[i][1]))
                continue;
            else return false;
        }
        
        return true;
    }
};