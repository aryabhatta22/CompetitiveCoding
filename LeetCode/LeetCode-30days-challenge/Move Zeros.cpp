/***************************************
Description: Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Example:

Input: [0,1,0,3,12]
Output: [1,3,12,0,0]
Note:

You must do this in-place without making a copy of the array.
Minimize the total number of operations.
***************************************/

void moveZeroes(vector<int>& nums) {
        int leftIndex =0;
        int rightIndex = 1;
        
       while(rightIndex <= nums.size() -1) {
           if(nums[leftIndex] == 0 && nums[rightIndex] != 0) {
               swap(nums[leftIndex], nums[rightIndex]);
               leftIndex++;
               rightIndex++;
           } else if(nums[leftIndex] == 0 && nums[rightIndex] == 0) {
               rightIndex ++;
           } else if(nums[leftIndex] != 0) {
               leftIndex++;
               rightIndex ++;
           }
       }
    }