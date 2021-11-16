class Solution {
public:
    int countBinarySubstrings(string s) {
    int cur= 1, prev = 0, ans = 0;
      for(int i = 1; i < size(s); i++) {
  	    if(s[i] != s[i - 1]){
            ans += min(prev, cur); // number of substring formed is minimum of cur & prev count
            prev = cur;
            cur = 1;
        }
  	else {
        cur++; 
    }
    }
      ans += min(prev, cur); 
      return ans;
    }
};
