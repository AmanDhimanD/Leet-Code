class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int>v(26,0);
        for(auto i: sentence){
            // a = 97
            v[i-'a']++;
        }
        for(int i=0;i<v.size();i++){
            if(!v[i]) return false;
        }
        return true;
    }
};
