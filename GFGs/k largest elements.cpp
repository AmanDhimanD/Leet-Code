class Solution{
public:	
	vector<int> kLargest(int arr[], int n, int k) {
	    // code here
	    sort(arr,arr+n,greater<int>());
	    vector<int> a(arr,arr+k);
	    return a;
	}
};
