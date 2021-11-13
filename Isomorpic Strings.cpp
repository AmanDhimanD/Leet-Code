class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map <char,vector<int>> s1;
        unordered_map <char,vector<int>> s2;
        int len = s.length();
        for(int i =0;i<len;i++) {
            s1[s[i]].push_back(i);
            s2[t[i]].push_back(i);
            if(s1[s[i]] != s2[t[i]]) {
              return false;
           }
        }
        
        return true;
    }
};
