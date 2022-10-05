vector<int> Solve(int n, vector<int>& nums) {
      vector<int>v;
        map<int,int>m;
        for(int i=0;i<n;i++)
        m[nums[i]]++;
        for(auto i:m)
        if(i.second>n/3)
        v.push_back(i.first);
        if(v.size()<1){
            v.push_back(-1);
            return v;
        }
        return v;
    }
