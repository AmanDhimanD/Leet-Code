class Solution {
  public:
       int RedOrGreen(int N,string S) {
           int numR=0,numG=0;
           for(int i=0;i<N;i++){
               if(S[i]=='R'){
                   numR++;
               }
               if(S[i]=='G'){
                   numG++;
               }
           }
           return (numR<numG? numR : numG);
    }
};
