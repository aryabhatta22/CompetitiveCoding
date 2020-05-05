/***************************************
Description: Given a string, find the first non-repeating character in it and return it's index. If it doesn't exist, return -1.

Examples:

s = "leetcode"
return 0.

s = "loveleetcode",
return 2.

***************************************/

int firstUniqChar(string s) {
        if(s.length() == 0 || s.length() == 1)
            return s.length() -1;
        
        unordered_map<char, int> _map;
        
        for(char el: s) {
            if(_map.find(el) == _map.end())
                _map.insert(make_pair(el, 1));
            else 
                _map[el] ++;
        }
        
        int i =0;
        
        for(char el: s) {
            if(_map[el] == 1)
                return i;
             i++;
        }
        
        return -1;
        
    }