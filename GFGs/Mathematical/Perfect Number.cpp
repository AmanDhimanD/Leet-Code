private:
    bool isPerfect(long long N){
        long long int sum=1;
        
        for(long long int i=2;i*i<=N;i++){
            if(N%i==0){
                if(i*i!=N){
                    sum+=i+N/i;
                }
                else{
                    sum+=i;
                }
            }
       }
       if(sum==N && N!=1){
           return true;
       }
       return false;
       
    }  
 public:
    int isPerfectNumber(long long N) {
        // code here
        isPerfect(N);
    
    }
