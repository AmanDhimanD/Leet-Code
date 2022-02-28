class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0;
        for(int i=0;i<nums.size();i++){
            sum +=nums[i];
        }
        int lnum=0,rnum=sum;
        for(int i=0;i<nums.size();i++){
            rnum = rnum -nums[i];
            if(lnum==rnum){
                return i;
            }
            lnum+=nums[i];
        }
        return -1;
    }
};
