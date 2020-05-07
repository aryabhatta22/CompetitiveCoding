/***************************************
Description: Given an array of size n, find the majority element. The majority element is the element that appears more than ⌊ n/2 ⌋ times.

You may assume that the array is non-empty and the majority element always exist in the array.

Example 1:

Input: [3,2,3]
Output: 3
Example 2:

Input: [2,2,1,1,1,2,2]
Output: 2

***************************************/

int majorityElement(vector<int>& nums) {
        if(nums.size() == 1)
            return nums[0];
        
        unordered_map<int, int> _map;
        int threshold = floor(nums.size()/2);
        
        for(int el: nums) {
            if(_map.find(el) == _map.end()) {
                _map.insert(make_pair(el, 1));
            } else {
                if(_map[el] >= threshold)
                    return el;
                else 
                    _map[el] ++;
            }
        }
        
        return -1;
    }