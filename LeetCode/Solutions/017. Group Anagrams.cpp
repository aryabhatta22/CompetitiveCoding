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
 
***************************************/


vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        unordered_map<string, vector<string>> _map;
        
        for(string el: strs) {
            string strCopy = el;
            sort(el.begin(), el.end());
            _map[el].push_back(strCopy);
        }
        
        for(auto el: _map) {
            result.push_back(el.second);
        }
        
        return result;
    }