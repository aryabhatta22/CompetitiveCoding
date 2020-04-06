/***************************************
Description: Given an array of strings, group anagrams together.

Example:

Input: ["eat", "tea", "tan", "ate", "nat", "bat"],
Output:
[
  ["ate","eat","tea"],
  ["nat","tan"],
  ["bat"]
]
Note:

All inputs will be in lowercase.
The order of your output does not matter.

***************************************/


vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<vector<string>> result;
        unordered_map<string, vector<string>> category;
        
        for(string str: strs) {
            string strCopy = str;
            sort(str.begin() ,str.end());
            category[str].push_back(strCopy);
        }
        
        for(auto cat: category) {
            result.push_back(cat.second);
        }
        
        return result;
    }