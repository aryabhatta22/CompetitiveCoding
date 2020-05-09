/***************************************
Description: Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Example:

Input: [0,1,0,3,12]
Output: [1,3,12,0,0]
 
***************************************/


void moveZeroes(vector<int>& nums) {
        if(nums.size() == 0 || nums.size() ==1)
            return;
        
        int i = 0;
        int count = 0;
        
        while(count <nums.size()) {
            if(nums[i] == 0) {
                nums.push_back(0);
                nums.erase(nums.begin() + i);
                count++;
            } else {
                count ++;
                i++;
            }
        }
    }