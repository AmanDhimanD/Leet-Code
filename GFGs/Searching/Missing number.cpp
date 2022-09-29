int missingNumber(int A[], int N)
{
    // Your code goes here
    int total = N*(N+1)/2;
    
    for(int i=0;i<N-1;i++){
        total-=A[i];
    }
    return abs(total);
}
