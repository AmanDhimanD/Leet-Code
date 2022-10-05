 bool find3Numbers(int A[], int n, int X)
    {
        //Your Code Here
        int l,r;
        sort(A,A+n);
        for(int i=0;i<n-2;i++){
            l = i+1;
            r = n-1;
            while(l<r){
                if(A[i]+A[l]+A[r]==X){
                    return true;
                }
                else if(A[i]+A[l]+A[r]<X){
                    l++;
                }
                else{
                    r--;
                }
            }
        }
        return false;
    }
