void binSort(int A[], int N)
    {
       //Your code here
       
       /**************
        * No need to print the array
        * ************/
        int k=0;
        for(int i=0;i<N;i++){
            if(A[i]==0){
                A[k++] = 0;
            }
        }
        for(int i=k;i<N;i++){
           A[k++] = 1;
        }
    }
