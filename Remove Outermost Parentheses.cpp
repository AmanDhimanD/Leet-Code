class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
        int cnt = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '('){
                cnt++;
                if(cnt != 1){
                    ans.push_back(s[i]);
                }
            }
            else if(s[i] == ')'){
                cnt--;
                if(cnt != 0){
                    ans.push_back(s[i]);
                }
            }
        }
        return ans;
    }
};
