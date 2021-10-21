class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        unordered_map<int,int>hash;
        for(int i = 0;i<n;i++){
            hash[nums[i]]++;
        }
        int max_count = 0,res = -1;
        for(auto i : hash){
            if(max_count<i.second){
                res = i.first;
                max_count = i.second;
            }
        }
        return res;
    }
};
