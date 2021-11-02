class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        // string s1 = word1[0].append(word1[1]);
        // string s2 = word2[0].append(word2[1]);
        // for(int i=0;(i<s1.length() || i<s2.length());i++ )
        // {
        //     if(s1[i]!=s2[i]){
        //         return false;
        //     }
        // }
        // return true;
       string s1=accumulate(word1.begin(),word1.end(),string());
       string s2=accumulate(word2.begin(),word2.end(),string());
        if(s1==s2){
            return true;
        }
       return false; 
    }
};
