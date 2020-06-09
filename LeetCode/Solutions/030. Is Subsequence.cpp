bool isSubsequence(string s, string t) {
        if(s.size() > t.size())
            return false;
        
        if(s.size() == 0 && t.size() == 0)
            return true;
        
        int i =0;
        int j =0;
        
        while(i<s.size() && j < t.size()) {
            if(s[i] == t[j]) {
                i++;
                j++;
            } else {
                j++;
            }
        }
        
        return i == s.size();
    }