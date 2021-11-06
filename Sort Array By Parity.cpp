class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> even,odd;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                even.push_back(nums[i]);
            }
            else{
                odd.push_back(nums[i]);
            }
        }
        vector<int> v(even);
        copy(odd.begin(), odd.end(), back_inserter(v));
        return v;
    }
};