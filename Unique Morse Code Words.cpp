class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
         vector<string> v{".-","-...","-.-.","-..",".","..-.","--.","....","..",".---",
"-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
                                                                                                        
        set<string> mp;
        for(int i=0;i<words.size();i++){
            string s=words[i];
            string fi="";
            for(int j=0;j<s.size();j++){
                fi+= v[s[j]-'a'];
            }
            mp.insert(fi);
        }
        return mp.size();
    }
};
