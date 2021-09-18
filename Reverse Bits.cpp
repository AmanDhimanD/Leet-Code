class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        //uint32 ->unsigned 
        uint32_t res = 0;
        uint32_t mask = 1;
        for(int i=0;i<32;i++){
            if(n & mask) {
                res = res+1;
            }
            if(i!=31){ //not equal to the 31
                res <<=1; //shifting
            mask <<=1;
            }
        }
        return res;
    }
};
