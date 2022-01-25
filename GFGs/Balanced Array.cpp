// { Driver Code Starts
#include <bits/stdc++.h>
#include<stdio.h>
#include<math.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
public:
    int minValueToBalance(int a[], int n)
    {
       int mid=n/2,temp=0,sumL=0,sumR=0;
       for(int i=0;i<mid;i++){
           sumL+= a[i];
       }
       for(int i=mid;i<n;i++){
           sumR+=a[i];
       }
       if(sumL>sumR){
           temp=sumL-sumR;
       }
       else {
           temp = sumR - sumL;
       }
       return temp;
    }
};



// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;	
		cout<<ob.minValueToBalance(a,n)<<endl;
	}
	return 0;
}  // } Driver Code Ends
