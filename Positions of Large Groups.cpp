class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        vector<vector<int>>ans;
        
        int i=0;
        while(i<s.length())
        {
            int j=i;
            while(i<s.length() && s[i]==s[j])
            {
                i++;
            }
            if(i-j>=3)
            {
                ans.push_back({j,i-1});
            }
        }
        return ans;
    }
};
