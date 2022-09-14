long long gcd(int a, int b){
            return (b==0 ? a : gcd(b,a%b));
    }
	public:
    int gcd(int N, int arr[])
    {
    	// Your code goes here
    	int ans=arr[0];
    	for(int i= 1;i<N;i++){
    	    
    	   ans = gcd(arr[i],ans);
    	   if(ans == 1)
            {
                return 1;
                }
    	}
    	return ans;
    }
