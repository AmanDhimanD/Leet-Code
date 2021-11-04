class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string r="";
        
        for(auto x : s)
        {
            if(x == '#')
            {
                if(r!="")
                    r.pop_back();
            }
            else
                r+=x;
        }
        
        string u="";
        
        for(auto x : t)
        {
            if(x == '#')
            {
                if(u!="")
                    u.pop_back();
            }
            else
                u+=x;
        }
        
        cout<<r<<" "<<u;
        return r==u;
    }
};
