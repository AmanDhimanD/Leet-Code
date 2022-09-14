private:
        long long fact(int n){
            if(n==0 || n==1){
                return 1;
            }
            return n*fact(n-1);
        }
public:
    long long nPr(int n, int r){
        // code here
        long long upperDigit = fact(n);
        long long lowerDigit = fact(n-r);
        return (upperDigit/lowerDigit)*1ll;
        
    }
