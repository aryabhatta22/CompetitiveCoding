vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ret(1);
		if (nums.empty()) return ret;
		sort(nums.begin(), nums.end());
		for (int i = 0; i < nums.size(); i++) {
			int len = ret.size();
			for (int j = 0; j < len; j++) {
				ret.push_back(ret[j]);
				ret.back().push_back(nums[i]);
			}
		}
		return ret;
    }