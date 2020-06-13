class RandomizedSet {
    unordered_map<int, int> _map;
    vector<int> arr;
public:
    /** Initialize your data structure here. */
    RandomizedSet() {
        
    }
    
    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) {
        if(_map.find(val) == _map.end()) {
            arr.push_back(val);
            _map[val] = arr.size() -1;
            return true;
        } else
            return false;
        
    }
    
    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val) {
        if(_map.find(val) == _map.end()) {
            return false;
        } else {
            int indx = _map[val];
            if(indx != arr.size() -1) {
                arr[indx] = arr.back();
                _map[arr.back()] = indx;
            }
            arr.pop_back();
            _map.erase(val);
            return true;
        }
            
    }
    
    /** Get a random element from the set. */
    int getRandom() {
        return arr[rand()%arr.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */