int findUnique(int *arr, int size)
{
    //Write your code here
    int ans = 0;
    for(int i=0;i<size;i++){
        ans = ans ^ arr[i];
    }
    return ans;
}

// Arr = 1,2,3,4,3,2,1
// 1^1 = 0, 2^2=0 and so on (same ^ same = 0) and (4^0=4)

