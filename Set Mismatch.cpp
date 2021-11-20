class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
       unordered_map<int,int>mp;
        vector<int>v;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(int i=0;i<=nums.size();i++){
            if(mp[i]>1){
                v.push_back(i);
            }
        }
        for(int i=1;i<=nums.size();i++){
            if(mp[i]==0){
                v.push_back(i);
            }
        }
        return v;
    }
};
