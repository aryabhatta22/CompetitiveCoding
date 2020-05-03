/***************************************
Description: Given an arbitrary ransom note string and another string containing letters from all the magazines, write a function that will return true if the ransom note can be constructed from the magazines ; otherwise, it will return false.

Each letter in the magazine string can only be used once in your ransom note.

Note:
You may assume that both strings contain only lowercase letters.

canConstruct("a", "b") -> false
canConstruct("aa", "ab") -> false
canConstruct("aa", "aab") -> true

***************************************/

bool canConstruct(string ransomNote, string magazine) {
        if(ransomNote.length() == 0)
            return true;
        if(magazine.length() == 0)
            return false;
        
        unordered_map<char, int> _map;
        
        for(char el: magazine) {
            if(_map.find(el) == _map.end())
                _map.insert(make_pair(el,1));
            else
                _map[el] += 1;
        }
        
        for(char el: ransomNote) {
            if(_map.find(el) != _map.end() ) {
                _map[el] -= 1;
                if(_map[el] < 0)
                    return false;
            } else {
                return false;
            }
            
        }
        
        return true;
    }