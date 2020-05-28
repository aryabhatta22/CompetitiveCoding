/***************************************
Description: Given a non negative integer number num. For every numbers i in the range 0 ≤ i ≤ num calculate the number of 1's in their binary representation and return them as an array.

Example 1:

Input: 2
Output: [0,1,1]
Example 2:

Input: 5
Output: [0,1,1,2,1,2]

Follow up:

It is very easy to come up with a solution with run time O(n*sizeof(integer)). But can you do it in linear time O(n) /possibly in a single pass?

***************************************/

int logxbase2(int x) {
        return (int) (log(x)/log(2));
    }
    vector<int> countBits(int num) {
        vector<int> result;
        result.push_back(0);
        
        if(num == 0)    
            return result;
        
        result.push_back(1);
        
        if(num == 1)
            return result;
        
        int range = 2;
        int exp = 1;
        for(int i =2; i<=num; i++) {
           if( logxbase2(i) == exp) { 
               range = i;
               exp++;
           }
            result.push_back(result[i%range] + 1);
        }
        
        return result;
    }