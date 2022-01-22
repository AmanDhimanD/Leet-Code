class Solution {
  public:
    string revStr(string S) {
        //reverse(S.begin(),S.end());
        //return S;
         int n=S.length();
        for(int i=n-1;i>=0;i--){
            cout<<S[i];
        }
    }
};
