int countZeroes(int arr[], int n) {
    int temp=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            temp++;
        }
    }
    return temp;
}
