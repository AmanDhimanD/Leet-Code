int multiply(int arr[], int n)
{
    int l=0,r=0;
    if(n==1){
        return 0;
    }
    for(int i=0;i<n/2;i++){
        l+=arr[i];
    }
    for(int i=n/2;i<n;i++){
        r+=arr[i];
    }
    return (l*r);
}
