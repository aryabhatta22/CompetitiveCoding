/***************************************
Description: Given a positive integer num, write a function which returns True if num is a perfect square else False.

Note: Do not use any built-in library function such as sqrt.

Example 1:

Input: 16
Output: true
Example 2:

Input: 14
Output: false
***************************************/

bool isPerfectSquare(int num) {
        
        int left = 1;
        int right = num;
        
        while(left <= right) {
            long long int mid = left +  floor((right-left)/2);
            //cout<<left<<" - "<<mid<<" - "<<right<<endl;
            
            if ((mid*mid) == num)
                return true;
            
            if(mid*mid < num )
                left = mid +1;
            else 
                right = mid -1;
        }
        
        return false;
    }