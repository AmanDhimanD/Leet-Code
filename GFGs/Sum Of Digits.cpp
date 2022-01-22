class Solution{
public:
    int sumOfDigits(int N){
        int rem=0,res=0;
        
        while(N>0){
            rem = N%10;
            res = res + rem;
            N = N / 10;
        }
        return res;
    }
};
