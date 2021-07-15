class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int size=digits.size();
        for(int i=size-1;i>=0;i--)
        {
            if(digits[i]<9)
            {
                digits[i]++;
                return digits;
            }
            else
            {
                digits[i]=0;
            }
        }
        vector<int>newnumber(size+1,0);
        newnumber[0]=1;
        return newnumber;
    }
};
