class Solution{   
public:
    int totalCount(int arr[], int n, int k) {
        // code here
       int sum=0;
       for(int i=0;i<n;i++)
       {
           int d;
         if(arr[i]%k==0)
           d=arr[i]/k;
         else
           d=(arr[i]/k)+1;    
         sum+=d;
       }
       return sum;
    }
};
