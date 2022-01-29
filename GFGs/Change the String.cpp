class Solution{
    public:
    
    string modify (string s)
    {
        
//             if(s[0]>='A' && s[0]<='Z'){
//                 transform(s.begin(), s.end(), s.begin(), ::toupper);
//             }
//             if(s[0]>='a' && s[0]<='z'){
//                 transform(s.begin(), s.end(), s.begin(), ::tolower);
//             }
         if(s[0]>='a' && s[0]<='z'){
             for(int i=0;i<s.size();i++){
                 if(s[i]>='A' && s[i]<='Z'){
                     s[i]+=32;
                 }
             }
         }
        else{
               for(int i=0;i<s.size();i++){
                 if(s[i]>='a' && s[i]<='z'){
                     s[i]-=32;
                 }
             }  
        }
        return s;
    }
};
