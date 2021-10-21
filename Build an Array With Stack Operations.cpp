class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> v;
        for (int i = 1, t = 0; t < target.size() && i <= n; ++i) {
            v.push_back("Push");
            if (target[t] == i) {
                ++t;
            }
            else v.push_back("Pop");
        }
        return v;
    }
};
