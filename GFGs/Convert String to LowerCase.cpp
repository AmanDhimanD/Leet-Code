class Solution {
  public:
    string toLower(string S) {
        // code here
//         transform(S.begin(), S.end(), S.begin(), ::tolower);
//         return S;
      
      int n=S.length();
        for(int i=0;i<n;i++){
            if(S[i]>='A' && S[i]<='Z'){
                S[i]=S[i]^32;
            }
        }
        return S;
    }
};
