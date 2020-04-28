/***************************************
Description: You have a queue of integers, you need to retrieve the first unique integer in the queue.

Implement the FirstUnique class:

FirstUnique(int[] nums) Initializes the object with the numbers in the queue.
int showFirstUnique() returns the value of the first unique integer of the queue, and returns -1 if there is no such integer.
void add(int value) insert value to the queue.
 

Example 1:

Input: 
["FirstUnique","showFirstUnique","add","showFirstUnique","add","showFirstUnique","add","showFirstUnique"]
[[[2,3,5]],[],[5],[],[2],[],[3],[]]
Output: 
[null,2,null,2,null,3,null,-1]

Explanation: 
FirstUnique firstUnique = new FirstUnique([2,3,5]);
firstUnique.showFirstUnique(); // return 2
firstUnique.add(5);            // the queue is now [2,3,5,5]
firstUnique.showFirstUnique(); // return 2
firstUnique.add(2);            // the queue is now [2,3,5,5,2]
firstUnique.showFirstUnique(); // return 3
firstUnique.add(3);            // the queue is now [2,3,5,5,2,3]
firstUnique.showFirstUnique(); // return -1

***************************************/

class FirstUnique {
    unordered_map<int, list<int>::iterator> _map;
    list<int> _keys;
public:
    FirstUnique(vector<int>& nums) {
        for(int el: nums)
            add(el);
        
    }
    
    int showFirstUnique() {
        if(_keys.size()) 
            return _keys.front();
        else
            return -1;
    }
    
    void add(int value) {
        if(_map.find(value) != _map.end()) {
                list<int>:: iterator it = _map[value];
                if(it != _keys.end()) {   // key in list
                    _keys.erase(it);
                    _map[value] = _keys.end();
                }
            } else {
                //first occurenec
                _keys.push_back(value);
                list<int>::iterator it = _keys.end();
                it--;
                _map[value] = it;
            }
    }
};

/**
 * Your FirstUnique object will be instantiated and called as such:
 * FirstUnique* obj = new FirstUnique(nums);
 * int param_1 = obj->showFirstUnique();
 * obj->add(value);
 */