class Solution{
    public:
    
    string modify (string s)
    {
        
            if(s[0]>='A' && s[0]<='Z'){
                transform(s.begin(), s.end(), s.begin(), ::toupper);
            }
            if(s[0]>='a' && s[0]<='z'){
                transform(s.begin(), s.end(), s.begin(), ::tolower);
            }
        return s;
    }
};
