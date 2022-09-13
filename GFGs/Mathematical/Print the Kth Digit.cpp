int kthDigit(int A,int B,int K){
        // code here
        
        long long x=pow(A,B); 
        int rem=0; 
        for(int i=1;i<=K;i++) { 
            rem=x%10;
            x=x/10;
        } 
        return rem;
    }
