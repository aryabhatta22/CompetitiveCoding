/***************************************
Description: Given a non-empty array of integers, every element appears twice except for one. Find that single one.
***************************************/


class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        map<int,int> m;
        long TotalSum=0, uniqueSum=0;
        
        for(long i=0;i<nums.size(); i++) {
            if(m[nums[i]]==0) {
                uniqueSum+= nums[i];
                m[nums[i]] =1;
            }
            TotalSum += nums[i];
        }
        
        return 2*(uniqueSum) - TotalSum;
    }
};