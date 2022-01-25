
//User function Template for C++

void rotate(int arr[], int n){
   int temp=0;
   for(int i=n-1;i>0;i--){
       temp=arr[i];
       arr[i]=arr[i-1];
       arr[i-1]=temp;
   }
}
















