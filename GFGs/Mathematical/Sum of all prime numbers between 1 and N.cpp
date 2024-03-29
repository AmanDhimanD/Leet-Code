long long int prime_Sum(int n){
   	    
   	    vector<bool>prime(n+1,true);
   	    prime[0] = false;
   	    prime[1] = false;
   	    for(int i=2;i*i<=n;i++){
   	        if(prime[i]){
   	            for(int j=2*i;j<=n;j+=i){
   	                prime[j] = false;
   	            }
   	        }
   	    }
   	    long long sum = 0;
   	    for(int i=2;i<=n;i++){
   	        if(prime[i]){
   	            sum+=i;
   	        }
   	    }
   	    return sum;
   	}    
