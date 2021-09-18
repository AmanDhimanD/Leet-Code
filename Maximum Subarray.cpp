class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int tempSum=nums[0],maxSum = nums[0];
        
        if(nums.size()==0){
            return 0;
        }
        
        for(int i=1;i<nums.size();i++){
            if(tempSum<0){
                tempSum = 0;
            }
            tempSum = tempSum + nums[i];
            if(tempSum >maxSum){
                maxSum = tempSum;
            }
        }
        return maxSum;
    }
};
