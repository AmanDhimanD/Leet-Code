class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        if( nums.size() < 2 ) return nums.size();
        int maxLen = 1, tmp = 1;
        for(int i=1; i<nums.size(); i++){
            if( nums[i] > nums[i-1] ) tmp++;
            else {
                maxLen = max( maxLen, tmp);
                tmp = 1;
            }
        } 
        return max( maxLen, tmp);
    }
};
