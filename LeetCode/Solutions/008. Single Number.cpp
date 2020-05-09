/***************************************
Description: Given a non-empty array of integers, every element appears twice except for one. Find that single one.

Note:

Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?

Example 1:

Input: [2,2,1]
Output: 1
Example 2:

Input: [4,1,2,1,2]
Output: 4
 
***************************************/


int singleNumber(vector<int>& nums) {
        if(nums.size() == 1)
            return nums[0];
        
        unordered_map<int, int> _map;
        int uniq;
        
        for(int el: nums) {
            if(_map.find(el) == _map.end())
                _map.insert(make_pair(el,1));
            else
                _map[el]++;
        }
        
        for(int el: nums) {
            if(_map[el] == 1 )
                return el;
            else
                continue;
        }
        
        return -1;
    }