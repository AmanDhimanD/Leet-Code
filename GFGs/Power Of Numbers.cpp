class Solution{
    public:
    //You need to complete this fucntion
    long long int M = 1e9+7;
  long long power(int N,int R) {
       if(R==0){
        return 1;
       }   
       
       if(R==1) {
           return N;
        }
       
       long long ans=power(N, R/2)%M;
       
       ans=(ans*ans)%M;
       if(R%2==0) {
           return ans%M;
           
       }
       else {
           return (ans*N)%M;
           
       }
   }

};
