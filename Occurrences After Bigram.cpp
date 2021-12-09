class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
         vector<string>st;
        vector<string>res;
        string word = "";
        for (auto x : text) 
        {
            if (x == ' ')
            {
                st.push_back(word);
                word = "";
            }
            else {
                word = word + x;
            }
        }
        st.push_back(word);
        
        for(int i=0;i<st.size()-2;i++)
        {
            if(st[i]==first && st[i+1]==second)
            {
                res.push_back(st[i+2]);
            }
        }
        
        return res;
    }
};
