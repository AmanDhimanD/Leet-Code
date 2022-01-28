class Solution {
  public:
    string delAlternate(string S) {
        string dup="";
        for(int i=0;i<S.size();i++){
            if(i%2==0){
                dup+=S[i];
                
            }
        }
        return dup;
    }
};
