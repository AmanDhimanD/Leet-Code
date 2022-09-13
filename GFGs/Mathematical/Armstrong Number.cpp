string armstrongNumber(int n){
        // code here
        int temp = n;
        int result=0,r=0;
        while(temp!=0){
            r = temp % 10;
            result += r*r*r;
            temp/=10;
        }
        return ((result==n) ? "Yes" : "No");
    }
