class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        int n = nums.size();
        map<int,int> m;
        vector<bool> vis(n,false);
        for(int i=0;i<n;i++)
            m[nums[i]] = i;
        int ans = 0;
        for(int i=0;i<n;i++)
        {
            //bool flg = true;
            if(!vis[i]){
            vis[i] = true;
            set<int> s;
            int j = i;
            while(1){
                if(s.size()==n || s.find(nums[j])!=s.end()){
                    break;
                }
                vis[nums[j]] = true;
                s.insert(nums[j]);
                j = nums[j];
            }
            if(s.size()>ans) ans = s.size();
            }
        }
        return ans;
    }
};
