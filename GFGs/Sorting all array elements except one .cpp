int* sortExceptK(int arr[], int n, int k)
{
	// Complete the function
    int num=arr[k];
    sort(arr,arr+n);
    int index=0;
    for(int i=0;i<n;i++){
        if(arr[i]==num){
            int temp=arr[k];
            arr[k]=num;
            arr[i]=temp;
            index=i;
            break;
        }
    }
    if(index>k){
        sort(arr+k+1,arr+n);
    }else if(index<k){
        
    sort(arr,arr+k);
    }
    
    return arr;
}
