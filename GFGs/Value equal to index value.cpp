class Solution{
public:

	vector<int> valueEqualToIndex(int arr[], int n) {
	  vector<int>solution; 
	    for(int i=0;  i< n; i++)
	    {
	        if(arr[i] == i+1)
	            solution.push_back(arr[i]);
	    }
	    return solution; 
	}
};
