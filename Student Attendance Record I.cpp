class Solution {
public:
    bool checkRecord(string s) {
     int l=0;
        int a=0;
        for(auto it:s)
        {
            if(it=='A')
            {
                a++;
            }
            if(it=='L')
            {
                l++;
            }
            else
            {
                l=0;
            }
            if(l>2||a>=2)
            {
                return false;
            }
        }
        return true;
    }
};
