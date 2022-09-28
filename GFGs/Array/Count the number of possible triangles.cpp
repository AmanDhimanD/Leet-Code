int findNumberOfTriangles(int arr[], int n)
    {
        // code here
        sort(arr,arr+n);
        int count=0;
        for(int i=n-1;i>=1;i--){
            int l=0,r=i-1;
            while(l<r){
                if(arr[l]+arr[r]>arr[i]){
                    count+=r-l;
                    r--;
                }
                else{
                    l++;
                }
            }
        }
        return count;
        
        // TC-> O(n3)
        /*for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    if((arr[i]+arr[j]>arr[k])&&(arr[i]+arr[k]>arr[j])&&(arr[k]+arr[j]>arr[i])){
                        count++;
                    }
                }
            }
        }
        return count;*/
    }
