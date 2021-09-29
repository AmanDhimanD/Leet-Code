class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        if(nums.empty()) return result;
        result.push_back(vector<int>(1,nums[0]));
        
        for(int i=1;i<nums.size();i++){
            int n = result.size();  
            for(int j=0; j<n; j++){
                for(int k=0; k<result[j].size(); k++){
                    vector<int> a = result[j];
                    a.insert(a.begin()+k, nums[i]);
                    result.push_back(a);
                }
                result[j].push_back(nums[i]);
            }            
        }
        return result;    
    }
};
