class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size(),t=0;
        sort(nums.begin(),nums.end());
        // unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            if(nums[i]==nums[i+1]){
                return nums[i];
            }
        }
        return -1;
    }
};
