int gcd(int A, int B) 
	{ 
	    // code here
	    return (B==0 ? A : gcd(B,A%B));
	      
	} 
