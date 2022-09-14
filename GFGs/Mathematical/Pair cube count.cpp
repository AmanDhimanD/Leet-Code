int pairCubeCount(int N) {
        // code here
        int a=1,b=0,count=0;
        for(int i=1;i*i*i<=N;i++){
            for(int j=0;j*j*j<=N;j++){
                if((i*i*i)+(j*j*j)==N){
                    count++;
                }
            }
        }
        return count;
    }
