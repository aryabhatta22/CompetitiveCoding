/***************************************
Description: You are given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears exactly once. Find this single element that appears only once.

 

Example 1:

Input: [1,1,2,3,3,4,4,8,8]
Output: 2
Example 2:

Input: [3,3,7,7,10,11,11]
Output: 10
 

Note: Your solution should run in O(log n) time and O(1) space.
to the starting pixel.
***************************************/

int singleNonDuplicate(vector<int>& nums) {
        
        if(nums.size() == 1)
            return nums[0];
        
        int left = 0;
        int right = nums.size() -1;
        int mid = 0;
        
        while(left<= right) {
            mid = floor((left+right)/2);
            
            if(mid+1 < nums.size() && nums[mid] != nums[mid+1])
                if(mid -1> 0 && nums[mid] != nums[mid-1])
                    return nums[mid];
            
            if((mid%2) == 0) {
                if(nums[mid] == nums[mid+1])
                    left = mid +1;
                else
                    right = mid -1;
            } else {
                if(nums[mid] == nums[mid-1])
                    left = mid +1;
                else
                    right = mid -1;
            }
                    
        }
        
        return nums[mid];
        
    }