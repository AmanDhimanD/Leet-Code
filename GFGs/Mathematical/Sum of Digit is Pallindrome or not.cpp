int isDigitSumPalindrome(int N) {
        // code here
        int temp = N;
        int lastDigit=0,result=0;
        while(temp>0){
            lastDigit = temp%10;
            result =result + lastDigit;
            temp/=10;
        }
        string str = to_string(result);
        string string_rev = "" + str;
         reverse(string_rev.begin(), string_rev.end());
        return ((str == string_rev) ? 1 : 0);
    }
