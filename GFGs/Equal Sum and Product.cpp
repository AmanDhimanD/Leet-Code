//User function template for C++
class Solution{
public:
	// returns required number of subarrays
	int numOfsubarrays(int arr[], int n) {
	    // code here
	    int sum=0,pro=0,num=n;
	    for(int i=0;i<n;i++){
	        sum=arr[i];
	        pro=arr[i];
	        for(int j=i+1;j<n;j++){
	            sum+=arr[j];
	            pro*=arr[j];
	            if(sum==pro){
	                num++;
	            }
	        }
	    }
	    return num;
	}
};
