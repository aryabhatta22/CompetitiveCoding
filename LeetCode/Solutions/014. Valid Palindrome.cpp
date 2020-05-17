/***************************************
Description: Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.

Note: For the purpose of this problem, we define empty string as valid palindrome.

Example 1:

Input: "A man, a plan, a canal: Panama"
Output: true
Example 2:

Input: "race a car"
Output: false
 
***************************************/


bool isPalindrome(string s) {
        if(s.size() == 1 || s.size() == 0)
            return true;
        
        transform(s.begin(), s.end(), s.begin(), ::tolower); 
        
        for(int i=0; i<s.size(); i++) {
            if(!isalnum(s[i])) {
                s.erase(s.begin()+i);
                i--;
            }
        }
        
        cout<<s<<" "<<endl;
        int left = 0;
        int right = s.size() -1;
        
        
        while(left < right) {
            if(s[left] != s[right])
                return false;
            left ++;
            right --;
        }
        
        return true;
    }