/***************************************
Description: Design and implement a data structure for Least Recently Used (LRU) cache. It should support the following operations: get and put.

get(key) - Get the value (will always be positive) of the key if the key exists in the cache, otherwise return -1.
put(key, value) - Set or insert the value if the key is not already present. When the cache reached its capacity, it should invalidate the least recently used item before inserting a new item.

The cache is initialized with a positive capacity.

Follow up:
Could you do both operations in O(1) time complexity?

Example:

LRUCache cache = new LRUCache( 2 /* capacity */ );

cache.put(1, 1);
cache.put(2, 2);
cache.get(1);       // returns 1
cache.put(3, 3);    // evicts key 2
cache.get(2);       // returns -1 (not found)
cache.put(4, 4);    // evicts key 1
cache.get(1);       // returns -1 (not found)
cache.get(3);       // returns 3
cache.get(4);       // returns 4
***************************************/

class LRUCache {
    int _capacity;
    list<int> _keys;
    unordered_map<int, pair<int, list<int>::iterator>> _map;
public:
    LRUCache(int capacity) {
        _capacity = capacity;
    }
    
    int get(int key) {
        if(_map.find(key) != _map.end()) {
            // key found
            _keys.erase(_map[key].second);
            _keys.push_front(key);
            _map[key].second = _keys.begin();
            return _map[key].first;
        }
        // key not found
        return -1;
    }
    
    void put(int key, int value) {
        if(_map.find(key) != _map.end()) {
            // move the key to beginning and update map
            _keys.erase(_map[key].second);
            _keys.push_front(key);
            _map[key] = {value, _keys.begin()};
        } else {
            if( _keys.size() == _capacity) {
                _map.erase(_keys.back());            // remove least recent
                _keys.pop_back();
            }
            _keys.push_front(key);
            _map[key] = {value, _keys.begin()};
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */