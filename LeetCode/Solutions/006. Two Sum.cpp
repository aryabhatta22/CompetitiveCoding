/***************************************
Description: Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

Example:

Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].
 
***************************************/


 vector<int> twoSum(vector<int>& nums, int target) {
        if(nums.size() == 0)
            return nums;
        
        unordered_map<int, int> _map;
        vector<int> result;
        
        for(int i =0; i<nums.size(); i++) {
            int comp = target - nums[i];
            
            if(_map.find(comp) != _map.end()) {
                
                result.push_back(_map[comp]);
                result.push_back(i);
                return result;
            }
            
            _map.insert(make_pair(nums[i], i));
        }
        
        return result;
    }