/***************************************
Description: Given an array of integers, find if the array contains any duplicates.

Your function should return true if any value appears at least twice in the array, and it should return false if every element is distinct.

Example 1:

Input: [1,2,3,1]
Output: true
Example 2:

Input: [1,2,3,4]
Output: false
Example 3:

Input: [1,1,1,3,3,4,3,2,4,2]
Output: true
 
***************************************/

bool containsDuplicate(vector<int>& nums) {
        
        if(nums.size() == 0 ||  nums.size() == 1)
            return false;
        
        unordered_set<int> _set;
        for(int el: nums) {
            if(_set.find(el) != _set.end())
                return true;
            else
                _set.insert(el);
        }
        
        return false;
    }