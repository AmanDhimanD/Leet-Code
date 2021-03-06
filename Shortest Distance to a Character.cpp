class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n = s.size();
        vector<int> ans(n);
        int zero = s.find(c);
        for (int i = 0; i < n; ++i)
        {
            if (s[i] == c)
            {
                ans[i] = 0;
                zero = i;
            }
            else
            {
                int p = s.find(c, i);
                int p1 = abs(p - i);
                int p2 = abs(zero - i);
                ans[i] = min(p1, p2);
            }
        }
        return ans;
    }
};
