class Solution {
public:
    int subsetXORSum(vector<int>& nums,int sum=0) {
         for(int x:nums)
            sum=sum | x;
        return sum*pow(2,nums.size()-1);
    }
};
