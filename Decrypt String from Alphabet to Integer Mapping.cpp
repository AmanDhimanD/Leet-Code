class Solution {
public:
     string freqAlphabets(string s)
    {
        int n = s.size();
        string ans = "";
        for (int i = 0; i < n; ++i)
        {
            if ((i + 2 < n) and (s[i + 2] == '#'))
            {
                string temp = "";
                temp += s[i];
                temp += s[i + 1];
                char z = 'a' + (stoi(temp) - 1);
                ans += z;
                i = i + 2;
            }
            else
            {
                int it = s[i] - '0';
                --it;
                char z = 'a' + it;
                ans += z;
            }
        }
        return ans;
    }
};
