class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        vector<pair<int,int>> arr;
        for(int i = 0; i < nums.size(); ++i)
            arr.push_back(make_pair(nums[i],i));
        sort(arr.begin(),arr.end(),greater<>());
        if(nums.size() == 1)
            return 0;
        if(arr[0].first >= 2*arr[1].first)
            return arr[0].second;
        return -1;
    }
};
