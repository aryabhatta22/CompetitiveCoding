/***************************************
Description: Given two arrays, write a function to compute their intersection.

Example 1:

Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2,2]
Example 2:

Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
Output: [4,9]
Note:

Each element in the result should appear as many times as it shows in both arrays.
The result can be in any order.
 
***************************************/


vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> result;
        
        if(nums1.size() == 0 || nums2.size() == 0)
            return result;
        
        unordered_map<int, int> _map;
        for(int el: nums1) {
            if(_map.find(el) == _map.end())
                _map.insert(make_pair(el, 1));
            else
                _map[el] +=1;
        }
            
        
        for(int el: nums2) {
            if( _map.find(el) != _map.end()) {
                if(_map[el] >0){
                    result.push_back(el);
                    _map[el] -=1;
                }
            } 
        }
        
        return result;
    }