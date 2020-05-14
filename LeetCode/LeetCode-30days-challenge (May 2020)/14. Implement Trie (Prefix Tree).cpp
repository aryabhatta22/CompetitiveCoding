/***************************************
Description: Implement a trie with insert, search, and startsWith methods.

Example:

Trie trie = new Trie();

trie.insert("apple");
trie.search("apple");   // returns true
trie.search("app");     // returns false
trie.startsWith("app"); // returns true
trie.insert("app");   
trie.search("app");     // returns true
Note:

You may assume that all inputs are consist of lowercase letters a-z.
All inputs are guaranteed to be non-empty strings.
***************************************/

class Trie {
    
    vector<Trie*> child;
    bool endOfWord;
    
public:
    /** Initialize your data structure here. */
    Trie() {
        endOfWord = false;
        for(int i=0; i<26; i++)
            child.push_back(nullptr);
    }
    
    /** Inserts a word into the trie. */
    void insert(string word) {
        Trie* cur = this;
        
        for(char el: word) {
            if(!cur->child[el - 'a'])
                cur->child[el - 'a'] = new Trie;
            cur = cur->child[el - 'a'];
        }
        
        cur->endOfWord = true;
        
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
        
        Trie* cur = this;
        
        for(char el: word) {
            if(cur->child[el - 'a'])
                cur = cur->child[el - 'a'];
            else
                return false;
        }
        
        return (cur->endOfWord);
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        Trie* cur = this;
        
        for(char el: prefix) {
            if(cur->child[el - 'a'])
                cur = cur->child[el - 'a'];
            else
                return false;
        }
        
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */