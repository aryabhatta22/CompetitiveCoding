void sortColors(vector<int>& nums) {
        int p0 = 0;
        int p1 = 0;
        int p2 = nums.size() -1;
        
        while(p0 <= p2) {
            // cout<<nums[p0]<<" ";
            if(nums[p0] == 2) {
                swap(nums[p0], nums[p2]);
                p2 --;
            } else if (nums[p0] == 1) {
                p0++;
            } else {
                swap(nums[p0], nums[p1]);
                p0++;
                p1++;
            }
        }
    }