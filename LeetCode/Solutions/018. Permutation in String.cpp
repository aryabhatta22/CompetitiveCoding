
bool checkInclusion(string s1, string s2) {
        if(s1.size() > s2.size())
            return false;
        
        vector<int> sub(26, 0);
        vector<int> super(26, 0);
        
        
        for(int i=0; i<s1.size(); i++) {
            super[s2[i] -'a']++;
            sub[s1[i] - 'a']++;
        }
        
        if(super == sub)
            return true;
        for(int i = s1.size(); i<s2.size(); i++) {
            super[s2[i] - 'a']++;
            super[s2[i - s1.size()] - 'a']--;
            if(super == sub)
                return true;
        }
        
        return false;
    }