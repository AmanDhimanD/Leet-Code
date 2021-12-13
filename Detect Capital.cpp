class Solution {
public:
    bool detectCapitalUse(string word) {
        if (word[word.length() - 1] >= 'a' && word.length() >= 3 && word[1] <= 'Z') return false;
        for (int i = 1; i < word.length(); i++) {
            if (word[i] <= 'Z' && word[i - 1] >= 'a') return false;
        }        
        return true;
    }
};
