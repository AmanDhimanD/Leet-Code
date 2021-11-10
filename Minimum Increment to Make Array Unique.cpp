class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
          int n = nums.size();
        sort(nums.begin(),nums.end());
        
        int prev = nums[0];
        int count = 0;
        
        for(int i=1; i<n; i++){
            if(nums[i] <= prev){ 
                prev += 1;
                count += (prev-nums[i]);
            }
            else
                prev = nums[i];
            
        }
        return count;
        
    }
};
