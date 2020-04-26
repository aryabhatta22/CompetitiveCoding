/***************************************
Description: Given two strings text1 and text2, return the length of their longest common subsequence.

A subsequence of a string is a new string generated from the original string with some characters(can be none) deleted without changing the relative order of the remaining characters. (eg, "ace" is a subsequence of "abcde" while "aec" is not). A common subsequence of two strings is a subsequence that is common to both strings.

 

If there is no common subsequence, return 0.

 

Example 1:

Input: text1 = "abcde", text2 = "ace" 
Output: 3  
Explanation: The longest common subsequence is "ace" and its length is 3.
Example 2:

Input: text1 = "abc", text2 = "abc"
Output: 3
Explanation: The longest common subsequence is "abc" and its length is 3.
Example 3:

Input: text1 = "abc", text2 = "def"
Output: 0
Explanation: There is no such common subsequence, so the result is 0.
***************************************/

int longestCommonSubsequence(string text1, string text2) {
        
        int n = text1.length();
        int m = text2.length();
        string result = "";
        
        vector<vector<int>> dp( n+1 , vector<int> (m+1));
        
        // for row 1 & column 1
        for(int i=0; i< m+1; i++) {
            dp[0][i] = 0;
        }
        
        for(int i=0; i< n+1; i++) {
            dp[i][0] = 0;
        }
                   
        
        
        // memorization
        for(int i=1; i<dp.size(); i++) {
            for(int j=1; j<dp[i].size(); j++) {
                if(text1[i-1] == text2[j-1]) 
                    dp[i][j] = 1 + dp[i-1][j-1];
                else
                    dp[i][j] = max( dp[i-1][j] , dp[i][j-1]);
            }
        }
        
        // traversing
        int i = n;
        int j = m;
        
        while(i >=1 && j>=1) {
            if(dp[i][j-1] < dp[i][j]){
                result = result + text2[j];
                i--;
                j--;
            }else {
                j--;
            }
        }
        
        reverse(result.begin(), result.end());
        //cout<<"Result: "<<result<<endl;
        
        return result.length();
    }