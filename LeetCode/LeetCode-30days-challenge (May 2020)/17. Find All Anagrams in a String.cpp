/***************************************
Description: Given a string s and a non-empty string p, find all the start indices of p's anagrams in s.

Strings consists of lowercase English letters only and the length of both strings s and p will not be larger than 20,100.

The order of output does not matter.

Example 1:

Input:
s: "cbaebabacd" p: "abc"

Output:
[0, 6]

Explanation:
The substring with start index = 0 is "cba", which is an anagram of "abc".
The substring with start index = 6 is "bac", which is an anagram of "abc".
***************************************/

 vector<int> findAnagrams(string s, string p) {
        vector<int> ret;
		if (p.size()>s.size()) return ret;
		vector<int> smap(26, 0);
		vector<int> pmap(26, 0);
		for (int i = 0; i < p.size(); i++) {
			smap[s[i] - 'a']++;
			pmap[p[i] - 'a']++;
		}
		if (smap == pmap) ret.push_back(0);
		for (int i = p.size(); i < s.size(); i++) {
			smap[s[i - p.size()] - 'a']--;
			smap[s[i] - 'a']++;
			if (smap == pmap) {
				ret.push_back(i - p.size() + 1);
			}
		}
		return ret;
    }