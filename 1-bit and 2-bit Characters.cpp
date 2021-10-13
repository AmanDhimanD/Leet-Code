class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int n = bits.size();
        
        bool isZero = false;
        
        int i=0;       
        
        while (i < n) {
            if (bits[i] == 0){
                isZero = true;
                i++;
            }
            else{
                isZero = false;
                i+=2;
            } 
        }
        return isZero;
    }
};
