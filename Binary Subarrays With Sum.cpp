class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int,int> map;
        int sum=0;
        map[0]=1;  
        int count=0;
        for(int i=0; i<nums.size(); i++){
            sum+=nums[i];
            if(map.find(sum-goal)!=map.end()){
                count+=map[sum-goal];
            }
            map[sum]++;
        }
        return count;
    }
};
