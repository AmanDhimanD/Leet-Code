int isPowerOfAnother(long long X, long long Y){
        // code here 
        
        for(long long int i=0;i<Y;i++){
            if(pow(X,i)==Y){
                return 1;
            }
        }
            return 0;
    }
