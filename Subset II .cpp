class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    sort(nums.begin(),nums.end());
        
    vector<vector<int> > res;
    vector<int> r;
        
    res.push_back(r);
    r.push_back(nums[0]);
    res.push_back(r);
        
    int pre = nums[0];
    int count = 1;
        
    for (int i=1;i<nums.size();i++){
      int st=0;  
      int sz = res.size();
      if (nums[i]==pre){st = sz-count;}
      count =0;
      for (int j=st;j<sz;j++){
        r = res[j];
        r.push_back(nums[i]);
        res.push_back(r);
        count++;
      }
      pre=nums[i];
    }
    return res;
    }
};
