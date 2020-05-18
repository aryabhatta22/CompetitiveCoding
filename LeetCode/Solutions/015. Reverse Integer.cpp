/***************************************
Description: Given a 32-bit signed integer, reverse digits of an integer.

Example 1:

Input: 123
Output: 321
Example 2:

Input: -123
Output: -321
Example 3:

Input: 120
Output: 21
Note:
Assume we are dealing with an environment which could only store integers within the 32-bit signed integer range: [−231,  231 − 1]. For the purpose of this problem, assume that your function returns 0 when the reversed integer overflows.
 
***************************************/


int reverse(int x) {
        
        int sign;
        (x<0)? (sign = -1) : (sign = 1);
        
        x = abs(x);
        long long int newNum = 0;
        
        while(x>0) {
            newNum =  newNum * 10 + (x%10);
            x/=10;
        }
        
        if (newNum > INT_MAX || newNum < INT_MIN)
                return 0;
        
        return sign*newNum;
        
    }