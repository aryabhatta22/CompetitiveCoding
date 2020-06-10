int searchInsert(vector<int>& nums, int target) {
        if(nums.size()  == 0)
            return 1;
        if(target == 0)
            return 0;
        
        int left = 0;
        int right = nums.size() -1;
        int mid = 0;
        
        while(left <=right) {
            mid = floor((left + right )/ 2);
            
            if(nums[mid] == target)
                return mid;
            else if(nums[mid] > target)
                right = mid -1;
            else 
                left = mid +1;
            
        }
        
        
        return ((nums[mid] < target)? mid+1: mid);
    }