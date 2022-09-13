	long long int reverse_digit(long long int n)
		{
		    // Code here
		    long long int temp = n;
		    int rem=0;
		    long long int res=0;
		    while(temp!=0){
		        rem = temp%10;
		        res = res*10 + rem;
		        temp/=10;
		    }
		    return res;
		}
