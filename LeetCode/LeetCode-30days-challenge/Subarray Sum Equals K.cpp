/***************************************
Description: Given an array of integers and an integer k, you need to find the total number of continuous subarrays whose sum equals to k.

Example 1:
Input:nums = [1,1,1], k = 2
Output: 2
Note:
The length of the array is in range [1, 20,000].
The range of numbers in the array is [-1000, 1000] and the range of the integer k is [-1e7, 1e7].

***************************************/

// TLE (O(n2))

class Solution {
    int totalSubArrays(vector<int>& nums, int k, int size) {
        int j=0;
        int sum=0;
        int result =0;
        for(int i=0; i<size; i++) 
            sum+=nums[i];
         if(sum == k)
                result ++;
        while(j+size< nums.size()) {
            sum = sum - (nums[j]) +(nums[j+size]);
            if(sum == k)
                result ++;
            j++;
        }
        
        return result;
    }
public:
    int subarraySum(vector<int>& nums, int k) {
        int count =0;
        for(int i=1; i<=nums.size(); i++) 
            count += totalSubArrays(nums, k, i);
        return count;
    }
};