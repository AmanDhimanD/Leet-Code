class Solution {
public:
    int PalinArray(int a[], int n)
    {
    	for(int i=0;i<n;i++){
    	    int rem=0,res=0,org=a[i],num=a[i];
    	    while(num!=0){
    	        rem = num%10;
    	        res = res*10 + rem;
    	        num = num/10;
    	    }
    	    if(res!=org){
    	        return 0;
    	    }
    	}
    	return 1;
    }
};
