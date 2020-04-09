/***************************************
Description: Given two strings S and T, return if they are equal when both are typed into empty text editors. # means a backspace character.

Example 1:

Input: S = "ab#c", T = "ad#c"
Output: true
Explanation: Both S and T become "ac".
Example 2:

Input: S = "ab##", T = "c#d#"
Output: true
Explanation: Both S and T become "".
Example 3:

Input: S = "a##c", T = "#a#c"
Output: true
Explanation: Both S and T become "c".

***************************************/

bool backspaceCompare(string S, string T) {
        
        string s1;
        string s2;
        
        for(auto ch: S) {
            if(ch == '#'){
                if(!s1.empty())
                s1.pop_back();
            }
            else
                s1.push_back(ch);
        }
        
        for(auto ch: T) {
            if(ch == '#'){
                 if(!s2.empty())
                s2.pop_back();
            }
            else
                s2.push_back(ch);
        }
        
        return s1 == s2;
    }