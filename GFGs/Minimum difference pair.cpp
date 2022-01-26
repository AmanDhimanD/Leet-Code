class Solution{
	public:
   	int  minimum_difference(vector<int>nums){
   	    // Code here
   	   sort(nums.begin(),nums.end());
   	    int max=100000;
   	    int ans=0;
   	    for(int i=0;i<nums.size()-1;i++){
   	        ans=nums[i+1]-nums[i];
   	        if(ans<max){
   	            max=ans;
   	        }
   	    }
   	    return max;
   	}    
};
