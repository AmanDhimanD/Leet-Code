class Solution {
public:
    bool isHappy(int n) {
      set<int>my_set;
      int val,index;
        while(1){
            val=0;
            while(n){
                index = n%10;
                val = val + index*index;
                n/=10;
            }
            if(val==1){
                return true;
            }
            else if(my_set.find(val)!=my_set.end()){
                return false;
            }
            my_set.insert(val);
            n=val;
        }
        return false;
    }
};
