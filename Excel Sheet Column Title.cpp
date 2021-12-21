class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans = "";
        while(columnNumber >= 26){
            int rem = columnNumber%26;
            columnNumber /= 26;
            if(rem == 0) ans = 'Z' + ans, columnNumber--;
            else ans = (char)(rem-1 + 'A') + ans;
        }
        if(columnNumber != 0) ans = (char)(columnNumber-1 + 'A') + ans;
        return ans;
    }
};
