class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        long int remender = 0;
        int temp=x;
        while(temp!=0){
            
            remender = (remender*10) + (temp%10);
            temp/=10;
        }
        if(remender!=x){
            return false;
        }
        return true;
    }
};
