class Solution {
public:
    string toHex(int num) {
    char s[9];
    sprintf(s, "%x", num);
    return string(s);
    }
}; 
