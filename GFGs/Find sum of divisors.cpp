class Solution
{
public:
    int sumOfDivisors(int N)
    {
        int sum=0;
        // Write Your Code here
        for(int i=1;i<=N;i++){
            if( N%i==0){
                
            for(int j=1;j<=i;j++){
                if(i%j==0){
                    sum+=j;
                }
            }
            }
        }
        return sum;
    }
};
