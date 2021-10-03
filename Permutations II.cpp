class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
		vector<vector<int>> res;
		tr(nums, res, 0);
		return res;
	}

	void tr(vector<int> nums, vector<vector<int>>& res, int begin) {
		if (begin == nums.size()-1) {
			res.push_back(nums);
		}
		else {
			for (int i = begin; i < nums.size(); ++i) {
				if (i != begin&&nums[i] == nums[begin]) continue;
				swap(nums[begin], nums[i]);
				tr(nums, res, begin + 1);
			}
		}
    }
};
