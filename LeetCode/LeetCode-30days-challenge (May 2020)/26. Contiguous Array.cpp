/***************************************
Description: Given a binary array, find the maximum length of a contiguous subarray with equal number of 0 and 1.

Example 1:

Input: [0,1]
Output: 2
Explanation: [0, 1] is the longest contiguous subarray with equal number of 0 and 1.

Example 2:

Input: [0,1,0]
Output: 2
Explanation: [0, 1] (or [1, 0]) is a longest contiguous subarray with equal number of 0 and 1.

***************************************/

int findMaxLength(vector<int>& nums) {
        if(nums.size() == 0 || nums.size() == 1)
            return 0;
        
        unordered_map<int, int> _map;
        
        _map[0] = -1;
        int maxlen = 0;
        int count = 0;
        
        for(int i=0; i<nums.size(); i++) {
            
            if(nums[i])
                count++;
            else
                count --;
            
            if(_map.find(count) != _map.end()) {
                maxlen = max(maxlen, i - _map[count]);
            } else {
                _map[count] = i;
            }
        }
        
        return maxlen;
    }